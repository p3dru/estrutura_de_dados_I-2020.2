#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numero, artificial, contador;
	printf("Digite um numero: ");
	scanf("%i", &numero);
	
	artificial = numero;
	
	contador = 1;
	
	if (numero < 10){
		printf("O numero %i tem 1 digito", numero);
	}else{
		do{
			artificial = artificial / 10;
			contador += 1;
		}while(artificial > 10);
		printf("O numero %i tem %i digitos", numero, contador);
	}
}
