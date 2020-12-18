#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int linhas, colunas, matriz[6][6];
	
	for(linhas = 0; linhas < 6; linhas ++)
	{
		for (colunas = 0; colunas < 6; colunas ++)
		{
			if(colunas == 0 || linhas == 0 || colunas == 5 || linhas == 5)
			{
				printf("1 ");
			}
			else
			{
				if(linhas == 1 && 0 < colunas < 5 || linhas == 4 && 0 < colunas < 5 || colunas == 1 && 0 < linhas < 5 || colunas == 4 && 0 < linhas < 5)
				{
					printf("2 ");
				}
				else
				{
					printf("3 ");
				}
				
			}
		}
		printf("\n");
	}
	
	
}

