#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int anos, meses, dias, dias_totais;
	printf("Digite os anos: ");
	scanf("%i", &anos);
	
	printf("Digite os meses: ");
	scanf("%i", &meses);
	
	printf("Digite os dias: ");
	scanf("%i", &dias);
	
	dias_totais = (meses * 30) + (anos * 365) + dias;
	
	printf("Essa pessoa viveu ao todo %i dias até hoje", dias_totais);
}
