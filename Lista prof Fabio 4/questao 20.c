#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int matriz[5][5], linhas, colunas, contador = 01;
	
	for(linhas = 0; linhas < 5; linhas ++)
	{
		for(colunas = 0; colunas < 5; colunas ++)
		{
			if (contador < 10)
			{
				printf("0%i ", contador);
			}
			else
			{
				printf("%i ", contador);
			}
			contador ++;
			
		}
		printf("\n");
	}
	
	
}
