#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n, maior, numero, mascara;
	
	printf("Digite o valor de N: ");
	scanf("%i", &n);
	
	mascara = n;
	
	maior = 0;
	
	do{
		printf("Digite um numero: ");
		scanf("%i", &numero);
		
		if (maior < numero){
			maior = numero;
		}
		
		n -= 1;
		
	}while(n > 0);
	
	printf("O maior valor digitado eh: %i", maior);
}
