#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int quantidade, contador = 0, resultado;
	printf("Digite a quantidade: ");
	scanf("%i", &quantidade);
	
	int vetor_a[quantidade], vetor_b[quantidade];
	
	do{
		printf("Digite o valor de vetor[%i]: ", contador);
		scanf("%i", &vetor_a[contador]);
		
		resultado = vetor_a[contador] % 2;
		if (resultado == 0){
			vetor_b[contador] = 0;
		}else{
			vetor_b[contador] = 1;
		}
		
		contador += 1;
		
	}while(contador < quantidade);
	
	printf("\nVetor A: ");
	
	contador = 0;
	
	do{
		printf("%i ", vetor_a[contador]);
		contador += 1;
	}while(contador < quantidade);
	
	contador = 0;
	
	printf("\nVetor B: ");
	
	contador = 0;
	
	do{
		printf("%i ", vetor_b[contador]);
		contador += 1;
	}while(contador < quantidade);
	
}
