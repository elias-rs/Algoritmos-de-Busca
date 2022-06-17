#include <stdlib.h>
#include <stdio.h>
#define MAX 10

int main (){
	
	int v[MAX], bsc, j = 0;
	
	printf("\n 01\t 02\t 03\t 04\t 05\t 06\t 07\t 08\t 09\t 10\n");
	
	for(int i=0; i<MAX; i++){
		v[i] = rand()%100;
		// v[i] = i;
		printf("[%d]\t", v[i]);
	}
	
	printf("\n\nInsira qual elemento voce vai buscar: ");
	scanf("%d", &bsc);
	
	for (int i=0; i<MAX; i++){
		if(v[i] == bsc){
			printf("\nO elemento %d foi encontrado na posicao %d ", v[i], i+1);
			j++;
			break;
		}
	}
	
	if(j==0){
		printf("\nElemento nao encontrado e/ou invalido");		
	}
	
}
