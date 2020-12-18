#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int quantidade, contador, vetor_a[quantidade], vetor_b[quantidade];
	
	printf("Digite o tamanho do vetor: ");
	scanf("%i", &quantidade);
	
	int vetor_c[quantidade * 2];
	
	contador = 1;
	
	do{
		printf("Digite o valor da posicao %i do vetor a: ", contador);
		scanf("%i", &vetor_a[contador]);
		
		vetor_c[contador] = vetor_a[contador];
		
		contador += 1;
		
	}while(contador <= quantidade);
	
	contador = 1;
	
	do{
		printf("Digite o valor da posicao %i do vetor b: ", contador);
		scanf("%i", &vetor_b[contador]);
		
		vetor_c[contador + quantidade] = vetor_b[contador];
		
		contador += 1;
		
	}while(contador <= quantidade);
	
	printf("\nLista c: ");
	
	contador = 1;
	
	do{
		
		printf("%i ", vetor_c[contador]);
		
		contador += 1;
		
		
	}while(contador <= (quantidade*2));
	
}
