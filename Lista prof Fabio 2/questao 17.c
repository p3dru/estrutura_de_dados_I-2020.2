#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float preco_1, preco_2, preco_3;
	
	printf("Digite o primeiro preco: ");
	scanf("%f", &preco_1);
	
	printf("Digite o segundo preco: ");
	scanf("%f", &preco_2);
	
	printf("Digite o terceiro preco: ");
	scanf("%f", &preco_3);
	
	if (preco_1 < preco_2 && preco_1 < preco_3)
	{
		printf("O produto a se escolher eh o 1");
	}
	if (preco_2 < preco_1 && preco_2 < preco_3)
	{
		printf("O produto a se escolher eh o 2");
	}
	if (preco_3 < preco_2 && preco_3 < preco_1)
	{
		printf("O produto a se escolher eh o 3");
	}
}
