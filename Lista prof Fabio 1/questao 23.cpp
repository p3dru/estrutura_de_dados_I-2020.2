#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float numero_1, numero_2, numero_3;
	printf("Digite o primeiro numero: ");
	scanf("%f", &numero_1);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &numero_2);
	
	printf("Digite o terceiro numero: ");
	scanf("%f", &numero_3);
	
	float media = (numero_1 + numero_2 + numero_3) / 3;
	
	printf("A media entre os 3 numeros lidos eh: %.2f", media);
		
}
