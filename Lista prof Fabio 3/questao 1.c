#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numero, contador;
	printf("Digite um numero: ");
	scanf("%i", &numero);
	
	contador = 1;
	
	while (numero != 0){
		printf("\nOs divisores de %i eh/sao: ", numero);
		while (contador <= numero){
			if (numero % contador == 0){
				printf("%i ", contador);
				contador ++;
			}else{
				contador ++;
			}
		}
		
	printf("\n\nDigite um numero: ");
	scanf("%i", &numero);
	contador = 1;
	}
}
