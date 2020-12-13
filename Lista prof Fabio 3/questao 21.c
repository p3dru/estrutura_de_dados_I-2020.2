#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numero_1, numero_2, contador, artificio;
	
	printf("Numero 1: ");
	scanf("%i", &numero_1);
	
	printf("Numero 2: ");
	scanf("%i", &numero_2);
	
	artificio = numero_2;
	
	contador = 1;
	
	while(contador < numero_1){
		numero_2 += artificio;
		contador ++;
		
	}
	printf("O resultado eh: %i", numero_2);
}
