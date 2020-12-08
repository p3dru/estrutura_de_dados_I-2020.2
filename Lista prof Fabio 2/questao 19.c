#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero;
	printf("Digite um numero: ");
	scanf("%i", &numero);
	
	if (numero == 1)
	{
		printf("Domingo");
	}
	if (numero == 2)
	{
		printf("Segunda");
	}
	if (numero == 3)
	{
		printf("Terça");
	}if (numero == 4)
	{
		printf("Quarta");
	}
	if (numero == 5)
	{
		printf("Quinta");
	}if (numero == 6)
	{
		printf("Sexta");
	}if (numero == 7)
	{
		printf("Sabado");
	}
	if (numero > 7)
	{
		printf("Invalido");
	}
}
