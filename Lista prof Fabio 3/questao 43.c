#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float media, n, soma, numero, artificio;
	
	printf("Digite N: ");
	scanf("%f", &n);
	
	artificio = n;
	
	do{
		
		printf("Digite o numero: ");
		scanf("%f", &numero);
		
		soma += numero;
		
		n -= 1;
		
	}while(n > 0);
	
	media = soma / artificio;
	
	printf("\nA soma de todos os numeros digitados eh: %.0f\nMedia: %.2f", soma, media);
}
