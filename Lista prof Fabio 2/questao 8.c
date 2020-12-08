#include <stdio.h>
#include <stdlib.h>

int main()
{
	float numero_1, numero_2, resultado;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &numero_1);
	
	printf("Digite o segundo valor: ");
	scanf("%f", &numero_2);
	
	int opcao;
	printf("Digite a operação que você deseja: \n1- adicao\n2- subtracao\n3- multiplicacao\n4- divisao\n");
	scanf("%i", &opcao);
	
	if (opcao == 1)
	{
		resultado = numero_1 + numero_2;
	} 
	if (opcao == 2)
	{
		resultado = numero_1 - numero_2;
	}
	if (opcao == 3)
	{
		resultado = numero_1 * numero_2;
	}
	if (opcao == 4)
	{
		resultado = numero_1 / numero_2;
	}
	
	printf("O resultado da operacao escolhida foi %.2f", resultado);
}
