#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int ordem, positivos, negativos;
	printf("Digite a ordem: ");
	scanf("%i", &ordem);
	
	int matriz[ordem][ordem], linhas, colunas;
	
	for(linhas = 0; linhas < ordem; linhas ++)
	{
		for(colunas = 0; colunas < ordem; colunas ++)
		{
			printf("Digite o valor de matriz[%i][%i]: ", linhas, colunas);
			scanf("%i", &matriz[linhas][colunas]);
			
			if (matriz[linhas][colunas] >= 0)
			{
				positivos += matriz[linhas][colunas];
			}
			else
			{
				negativos += matriz[linhas][colunas];
			}
		}
	}
	
	printf("A soma dos positivos eh: %i\nA soma dos negativos eh: %i", positivos, negativos - 1);
	
}
