#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int numero_1, numero_2, mmc, resto, maior, menor;
	
	printf("Numero 1: ");
	scanf("%i", &numero_1); // atribui a numero_1
	
	printf("Numero 2: ");
	scanf("%i", &numero_2); // atribui a nmero_2
	
	if (numero_1 < numero_2){ //define os maiores e menores valores
		maior = numero_1;
		menor = numero_2;
	}else{
		maior = numero_2;
		menor = numero_1;
	}
	
	do{
		resto = maior % menor; // fazer divisoes sucessivas entre os numeros enquanto o resto não eh 0
		
		maior = menor;
		menor = resto;
		
	}while(resto != 0);
	
	mmc = (numero_1 * numero_2) / maior;
	
	printf("O mmc eh: %i", mmc);
	
}
