#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int primeiro, razao, termos, contador;
	
	printf("Primeiro termo: ");
	scanf("%i", &primeiro);
	
	printf("Razao: ");
	scanf("%i", &razao);
	
	printf("Quantidade de termos: ");
	scanf("%i", &termos);
	
	printf("%i termos da PA: ", termos);
	
	contador = 1;
	
	while (contador <= termos){
		printf("%i ",primeiro);
		primeiro += razao;
		contador += 1;
	}
}
