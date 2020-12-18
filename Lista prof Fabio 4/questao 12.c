#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int ordem, linhas, colunas;
	printf("Digite a ordem: ");
	scanf("%i", &ordem);
	
	int matriz[ordem][ordem];
	
	for (linhas = 0; linhas < ordem; linhas ++)
	{
		for (colunas = 0; colunas < ordem; colunas ++)
		{
			if (colunas == linhas)
			{
				matriz[linhas][colunas] = 1;
			}
			else
			{
				matriz[linhas][colunas] = 0;
			}
		}
	}
	
	printf("\n");
	
	for (linhas = 0; linhas < ordem; linhas ++)
	{
		for (colunas = 0; colunas < ordem; colunas ++)
		{
			printf("%i ", matriz[linhas][colunas]);
		}
		printf("\n");
	}
}
