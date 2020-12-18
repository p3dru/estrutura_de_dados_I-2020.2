#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int quantidade, masc, contador = 0;
	printf("Digite a quantidade de elementos no termo: ");
	scanf("%i", &quantidade);
	
	masc = quantidade;
	
	int vetor_a[quantidade], vetor_b[quantidade];
	
	do{
		printf("Digite o valor da posicao %i: ", contador);
		scanf("%i", &vetor_a[contador]);
		
		contador += 1;
		
	}while(contador < quantidade);
	
	contador = 0;
	
	printf("\nLista A: ");
	do{
		printf("%i ", vetor_a[contador]);
		contador += 1;
		
	}while(contador < quantidade);
	
	contador = 0;
	
	do{
		vetor_b[contador] = vetor_a[masc - 1];
		contador += 1;
		masc -= 1;
		
	}while(masc >= 0);
	
	contador = 0;
	
	printf("\nLista B: ");
	do{
		printf("%i ", vetor_b[contador]);
		contador += 1;
		
	}while(contador < quantidade);
}
