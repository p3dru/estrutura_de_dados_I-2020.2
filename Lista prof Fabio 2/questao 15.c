#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char letra; // cria char pra letra
	printf("Digite uma letra: ");
	scanf("%c", letra);
	
	if (letra == 'F')
	{
		printf("Feminino");
	}
	if (letra == 'M')
	{
		printf("Masculino");
	}
	if (letra != 'F' || letra != 'M')
	{
		printf("Sexo inválido");
	}
	
	system("pause");
	
	return 0;
}
