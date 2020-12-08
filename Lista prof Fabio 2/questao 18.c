#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
	char letra;
	printf("Digite o turno: ");
	scanf("%c", &letra);
	
	if (letra =='M')
	{
		printf("Bom dia");
	}
	if (letra == 'V')
	{
		printf("Boa tarde");
	}
	if (letra == 'N')
	{
		printf("Boa noite");
	}
	if (letra != 'V' && letra != 'N' && letra != 'M')
	{
		printf("Valor invalido");
	}
}
