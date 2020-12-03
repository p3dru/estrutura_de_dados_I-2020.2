#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int dias_totais, dias, meses, anos;
	printf("Digite a quantidade de dias: ");
	scanf("%i", &dias_totais);
	
	anos = dias_totais / 365;
	
	meses = (dias_totais % 365) / 30;
	
	dias =  (dias_totais % 365) % 30;
	
	printf("%i dias correspondem a %i anos, %i meses e %i dias", dias_totais, anos, meses, dias);
	
}
