#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dia_1, dia_2, mes_1, mes_2, ano_1, ano_2;
	
	printf("Digite o dia 1: ");
	scanf("%i", &dia_1);
	
	printf("Digite o mes 1: ");
	scanf("%i", &mes_1);
	
	printf("Digite o ano 1: ");
	scanf("%i", &ano_1);
	
	printf("Digite o dia 2: ");
	scanf("%i", &dia_2);
	
	printf("Digite o mes 2: ");
	scanf("%i", &mes_2);
	
	printf("Digite o ano 2: ");
	scanf("%i", &ano_2);
	
	if (ano_1 > ano_2)
	{
		printf("A data 1 eh a mais recente");
	}
	if (ano_1 == ano_2 && mes_1 > mes_2)
	{
		printf("A data 1 eh a mais recente");
	}
	if (ano_1 == ano_2 && mes_1 == mes_2 && dia_1 > dia_2)
	{
		printf("A data 1 eh a mais recente");
	}
	if (ano_2 > ano_1)
	{
		printf("A data 2 eh a mais recente");
	}
	if (ano_2 == ano_1 && mes_2 > mes_1)
	{
		printf("A data 2 eh a mais recente");
	}
	if (ano_2 == ano_1 && mes_1 == mes_2 && dia_2 > dia_1)
	{
		printf("A data 2 eh a mais recente");
	}
	if (ano_2 == ano_1 && mes_1 == mes_2 && dia_2 == dia_1)
	{
		printf("As datas sao iguais");
	}
}
