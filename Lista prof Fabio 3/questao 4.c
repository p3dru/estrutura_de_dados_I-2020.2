#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float numero;
	printf("Digite um numero: ");
	scanf("%f", &numero);
	
	while(numero > 1){
		numero = numero / 2;
	}
	
	printf("Ultimo resultado: %.2f", numero);
	
}
