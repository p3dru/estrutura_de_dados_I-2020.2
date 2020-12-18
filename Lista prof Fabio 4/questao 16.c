#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int ordem;
	printf("Digite a ordem: ");
	scanf("%i", &ordem);
	
	int matriz[ordem][ordem], transposta[ordem][ordem], linhas, colunas, contagem, checagem;
	
	for(linhas = 0; linhas < ordem; linhas ++)
	{
		for(colunas = 0; colunas < ordem; colunas ++)
		{
			printf("Digite o valor de matriz[%i][%i]: ", linhas, colunas);
			scanf("%i", &matriz[linhas][colunas]);
		}
	}
	
	for(linhas = 0; linhas < ordem; linhas ++)
	{
		for(colunas = 0; colunas < ordem; colunas ++)
		{
			
			if (matriz[linhas][colunas] == matriz[colunas][linhas])
			{
				contagem += 1;
			}
		}
	}
	
	checagem = ordem * ordem;
	
	if (contagem == checagem)
	{
		printf("\nAs matrizes sao simetricas");
	}
	else
	{
		printf("\nAs matrizes nao sao simetricas");
	}
}
