#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int limite_i, limite_s, resultado;
	
	printf("Digite o limite inferior: ");
	scanf("%i", &limite_i);
	
	printf("Digite o limite superior: ");
	scanf("%i", &limite_s);
	
	printf("\nPares de %i a %i: ", limite_i, limite_s);
	
	do{
		resultado = limite_i % 2;
		
		if (resultado == 0){
			printf("%i ", limite_i);
		}
		limite_i += 1;
	}while(limite_i <= limite_s);
}
