#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int maior, menor, pos_maior, pos_menor, quantidade, contador;
	
	printf("Tamanho do vetor: ");
	scanf("%i", &quantidade);
	
	int vetor[quantidade];
	
	do{
		
		printf("Digite o valor da posicao %i: ", contador);
		scanf("%i", &vetor[contador]);
		
		if (contador == 0){
			maior = vetor[contador];
			pos_maior = contador;
			menor = vetor[contador];
			pos_menor = contador;
		}else{
			if(vetor[contador] > maior){
				maior = vetor[contador];
				pos_maior = contador;
			}
			if(vetor[contador] < menor){
				menor = vetor[contador];
				pos_menor = contador;
			}
		}
		
		contador += 1;
	}while(contador < quantidade);
	
	printf("\nO maior número lido foi o %i na posicao %i\nO menor número lido foi o %i na posicao %i", maior, pos_maior, menor, pos_menor);
}
