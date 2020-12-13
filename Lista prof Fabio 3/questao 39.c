#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n, limite_i, limite_s, resultado;
	
	printf("Digite o N: ");
	scanf("%i", &n);
	
	printf("Digite o limite inferior: ");
	scanf("%i", &limite_i);
	
	printf("Digite o limite superior: ");
	scanf("%i", &limite_s);
	
	printf("Multiplos de N: ");
	
	do{
		resultado = limite_i % n;
		
		if (resultado == 0){
			printf("%i ", limite_i);
		}
		limite_i += 1;
	}while(limite_i < limite_s);
}
