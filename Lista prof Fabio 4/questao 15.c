#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int ordem, linhas, colunas, maior, linha_maior, coluna_maior, menor, linha_menor, coluna_menor;
	printf("Digite a ordem: ");
	scanf("%i", &ordem);
	
	int matriz[ordem][ordem];
	
	for(linhas = 0; linhas < ordem; linhas ++)
	{
		for(colunas = 0; colunas < ordem; colunas ++)
		{
			printf("Digite o valor de matriz[%i][%i]: ", linhas, colunas);
			scanf("%i", &matriz[linhas][colunas]);
			
			if(linhas == 0 && colunas == 0)
			{
				maior = matriz[0][0];
				linha_maior = linhas;
				coluna_maior = colunas;
				menor = matriz[0][0];
				linha_menor = linhas;
				coluna_menor = colunas;
			}
			else
			{
				if (matriz[linhas][colunas] < menor)
				{
					menor = matriz[linhas][colunas];
					linha_menor = linhas;
					coluna_menor = colunas;
				}
				
				if (matriz[linhas][colunas] > maior)
				{
					maior = matriz[linhas][colunas];
					linha_maior = linhas;
					coluna_maior = colunas;
				}
			}
		}
	}
	
	printf("O maior elemento lido foi o %i, na linha %i, coluna %i", maior, linha_maior, coluna_maior);
	printf("\nO menor elemento lido foi o %i, na linha %i, coluna %i", menor, linha_menor, coluna_menor);
	
}
