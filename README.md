# Algoritmos de Busca

Nesse tópico irei estar disponibilizando dois (02) dos principais algoritmos de busca

 * Busca Binária
 * Busca Sequencial

# Busca Binária
A busca binária é um eficiente algoritmo para encontrar um item em uma lista ordenada de itens. 
<br> Ela funciona dividindo repetidamente pela metade a porção da lista que deve conter o item, até reduzir as localizações possíveis a apenas uma.

* Exemplo:

<br>
<code> int buscaBin(int tam, int* vet, int busca){
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
	
} </code>
<br>
<img src="https://camo.githubusercontent.com/7d378acc46223bcd31ae0c20598716ab92d68191543f8c5a52c8d9f4db9d249b/68747470733a2f2f6473303535757a6574616f62622e636c6f756466726f6e742e6e65742f696d6167655f6f7074696d697a65722f373137343033623133363833373663623666393135653662346265656233613761643534313035652e676966" alt="" height="160" width="370">

Seu tempo de execução no melhor caso: O(1)

Seu tempo de execução no pior caso: O(log n)

# Busca Sequencial

A busca sequencial (também conhecido como busca linear) é o algoritmo mais simples de busca, porém tem baixa eficiência 

* Exemplo:
<br>

<code>for (int i=0; i<MAX; i++){
                           
		if(v[i] == bsc){
			printf("\nO elemento %d foi encontrado na posicao %d ", v[i], i+1);
			j++;
			break;
		}
  }   
                           
 </code>

<br>
<img src="http://www.tutorialspoint.com/data_structures_algorithms/images/linear_search.gif" alt="">

Seu tempo de execução no melhor caso: O(1)

Seu tempo de execução no pior caso: O(n)

# Referências

* https://pt.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search#:~:text=A%20busca%20bin%C3%A1ria%20%C3%A9%20um,localiza%C3%A7%C3%B5es%20poss%C3%ADveis%20a%20apenas%20uma.
* https://github.com/igorcalbuquerque/buscaBinaria
* http://www.tutorialspoint.com/data_structures_algorithms/images/linear_search.gif
* https://ic.unicamp.br/~mc102/aulas/aula11.pdf
