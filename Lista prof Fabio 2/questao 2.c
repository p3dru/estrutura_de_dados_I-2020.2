#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num_1, num_2, num_3;
	
	printf("Digite o primeiro numero: ");
	scanf("%i", &num_1);
	
	printf("Digite o segundo numero: ");
	scanf("%i", &num_2);
	
	printf("Digite o terceiro numero: ");
	scanf("%i", &num_3);
	
	if (num_1 > num_2)
	{
		if (num_1 > num_3)
		{
			printf("O maior numero eh o %i", num_1);
		}
	}
	if (num_2 > num_1)
	{
		if (num_2 > num_3)
		{
			printf("O maior numero eh o %i", num_2);
		}
	}
	if (num_3 > num_1)
	{
		if (num_3 > num_2)
		{
			printf("O maior numero eh o %i", num_3);
		}
	}
}
