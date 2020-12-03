#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float valor_real;
	printf("Digite um valor em real: ");
	scanf("%f", &valor_real);
	
	float valor_70 = (valor_real / 100) * 70;
	
	printf("70 por cento = %.2f", valor_70);
	
}
