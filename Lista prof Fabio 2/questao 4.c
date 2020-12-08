#include <stdio.h>
#include <stdlib.h>

int main()
{
	int angulo_1, angulo_2, angulo_3, soma;
	
	printf("Digite o primeiro angulo: ");
	scanf("%i", &angulo_1);
	
	printf("Digite o segundo angulo: ");
	scanf("%i", &angulo_2);
	
	printf("Digite o terceiro angulo: ");
	scanf("%i", &angulo_3);
	
	soma = angulo_1 + angulo_2 + angulo_3;
	
	if (angulo_1 == 0 || angulo_2 == 0 || angulo_3 == 0 || soma != 180)
	{
		printf("Nao forma triangulo");
	}
	else
	{
		if (angulo_1 == 90 || angulo_2 == 90 || angulo_3 == 90)
		{
			printf("Forma um triangulo retangulo");
		}
		if (angulo_1 < 90 && angulo_2 < 90 && angulo_3 < 90)
		{
			printf("Forma um triangulo acutangulo");
		}
		if (angulo_1 > 90 || angulo_2 > 90 || angulo_3 > 90)
		{
			printf("Forma um triangulo obtusangulo");
		}
	}
}
