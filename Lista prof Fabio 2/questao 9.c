#include <stdio.h>
#include <stdlib.h>

int main()
{
	float altura, quilos, imc;
	
	printf("Digite a altura (em m): ");
	scanf("%f", &altura);
	
	printf("Digite o peso (em kg): ");
	scanf("%f", &quilos);
	
	imc = quilos / (altura * altura);
	
	if (imc < 25)
	{
		printf("Peso normal");
	}
	if (imc >= 25 && imc <= 30)
	{
		printf("Obeso");
	}
	if (imc > 30)
	{
		printf("Obesidade morbida");
	}
}
