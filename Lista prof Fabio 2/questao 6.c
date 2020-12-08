#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dia, mes, ano;
	
	printf("Digite um dia: ");
	scanf("%i", &dia);
	
	printf("Digite um mes: ");
	scanf("%i", &mes);
	
	printf("Digite um ano: ");
	scanf("%i", &ano);
	
	if (mes > 0 && mes < 13)
	{
		if (mes == 2)
		{
			if (dia > 0 && dia < 30)
			{
				printf("Data Valida");
			}
			else
			{
				printf("Data inválida");
			}
		}
		else
		{
			if (dia > 0 && dia < 32)
			{
				printf("Data Valida");
			}
			else
			{
				printf("Data invalida");
			}
		}
	}
	else
	{
		printf("Data invalida");
	}
}
