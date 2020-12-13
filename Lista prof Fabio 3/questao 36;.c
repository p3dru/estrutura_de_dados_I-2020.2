#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numero, contador, numero_masc;
	
	printf("Numero: ");
	scanf("%i", &numero);
	
	numero_masc = numero;
	
	contador = numero - 1;
	while(contador > 0){
		numero *= contador;		
		contador -= 1;
	}
	printf("\nO fatorial de %i eh %i", numero_masc, numero);

}
