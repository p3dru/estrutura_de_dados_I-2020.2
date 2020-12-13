#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n, contador, cont_masc;
	
	printf("Digite o numero limite: ");
	scanf("%i", &n);
	
	contador = 1;
	
	do{
		cont_masc = contador % 2;
		switch(cont_masc){
			case 0:
				printf("%i\n", contador);
				contador += 1;
				break;
			default:
				contador += 1;
		}
	}while(contador <= n);
}
