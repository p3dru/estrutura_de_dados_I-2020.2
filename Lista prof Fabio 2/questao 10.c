#include <stdio.h>
#include <stdlib.h>

int main()
{
	int angulo;
	printf("Digite um angulo (min: 0 e max 360): ");
	scanf("%i", &angulo);
	
	if (angulo > 0 && angulo <= 90)
	{
		printf("O angulo esta no 1° quadrante");
	}
	
	if (angulo > 90 && angulo <= 180)
	{
		printf("O angulo esta no 2° quadrante");
	}
	
	if (angulo > 180 && angulo <= 270)
	{
		printf("O angulo esta no 3° quadrante");
	}
	
	if (angulo > 270 && angulo <= 360)
	{
		printf("O angulo esta no 4° quadrante");
	}
	
}
