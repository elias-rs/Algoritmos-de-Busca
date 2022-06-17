#include <stdlib.h>
#include <stdio.h>
#define MAX 10

int buscaBin(int tam, int* vet, int busca){
	int ini = 0, meio, fim = tam-1;
	
	while(ini <= fim){
		meio = (ini + fim)/2;
		if(busca < vet[meio]){
			fim = meio - 1;
		}else{
			if(busca > vet[meio]){
				ini = meio + 1;
			}else{
				return meio;
			}
		}
	}
	fflush(stdin);
	return -1;
	
}

int main (){
	
	int v[MAX], bsc, tam;
	
	printf("\n 01\t 02\t 03\t 04\t 05\t 06\t 07\t 08\t 09\t 10\n");
	
	for(int i=0; i<MAX; i++){
		v[i] = i+10;
		printf("[%d]\t", v[i]);
	}
	
	tam = sizeof(v)/sizeof(int);
	//do{
		printf("\n\nInsira qual elemento voce vai buscar: ");
		scanf("%d", &bsc);
		if(buscaBin(tam,v, bsc) == -1){
			printf("\nO elemento nao foi encontrado e/ou eh invalido");
		}else{
			printf("\nO elemento foi encontrado na posicao %d", buscaBin(tam, v, bsc)+1);
		}
	//}while(bsc>=0);
	
}
