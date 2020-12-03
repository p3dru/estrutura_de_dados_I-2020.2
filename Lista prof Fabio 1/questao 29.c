#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int valor_total, de_50, de_20, de_10, de_5, de_2;
	printf("Digite o valor que deseja sacar: ");
	scanf("%i", &valor_total);
	
	de_50 = valor_total / 50;
	
	de_20 = (valor_total % 50) / 20;
	
	de_10 = ((valor_total % 50) % 20) / 10;
	
	de_5 = (((valor_total % 50) % 20) % 10) / 5;
	
	de_2 = ((((valor_total % 50) % 20) % 10) % 5) / 2;
	
	printf("As celulas a seres distribuidas são:\n%i de 50 reais\n%i de 20 reais\n%i de 10 reais\n%i de 5 reais\n%i de 2 reais", de_50, de_20, de_10, de_5, de_2);
}
