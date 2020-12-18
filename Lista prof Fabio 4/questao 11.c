#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int ordem, linhas, colunas;
	printf("Digite a ordem da matriz: ");
	scanf("%i", &ordem);
	
	int matriz[ordem][ordem];
	
	for (linhas = 0; linhas < ordem; linhas ++)
	{
		for (colunas = 0; colunas < ordem; colunas ++)
		{
			printf("Digite o valor de [%i][%i]: ", linhas, colunas);
			scanf("%i", &matriz[linhas][colunas]);
		}
	}
	
	printf("\n");
	printf("Matriz normal: \n");
	
	for (linhas = 0; linhas < ordem; linhas ++)
	{
	
		for (colunas = 0; colunas < ordem; colunas ++)
		{
			printf("%i ", matriz[linhas][colunas]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("Matriz transposta: \n");
	
	for (linhas = 0; linhas < ordem; linhas ++)
	{
		for (colunas = 0; colunas < ordem; colunas ++)
		{
			printf("%i ", matriz[colunas][linhas]);
		}
		printf("\n");
	}
}
