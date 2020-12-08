#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num_1, num_2, num_3;
	
	printf("Numero 1: ");
	scanf("%i", num_1);
	
	printf("Numero 2: ");
	scanf("%i", num_2);
	
	printf("Numero 3: ");
	scanf("%i", num_3);
	
	if (num_1 > num_2)
	{
		if (num_1 > num_3)
		{
			if (num_2 > num_3)
			{
				printf("Em ordem: %i, %i, %i", num_1, num_2, num_3);
			}
			else
			{
				printf("Em ordem: %i, %i, %i", num_1, num_3, num_2);
			}
		}
	}
	
	if (num_2 > num_3)
	{
		if (num_2 > num_1)
		{
			if (num_1 > num_3)
			{
				printf("Em ordem: %i, %i, %i", num_2, num_1, num_3);
			}
			else
			{
				printf("Em ordem: %i, %i, %i", num_2, num_3, num_1);
			}
		}
	}
	
	if (num_3 > num_1)
	{
		if (num_3 > num_2)
		{
			if (num_1 > num_2)
			{
				printf("Em ordem: %i, %i, %i", num_3, num_1, num_2);
			}
			else
			{
				printf("Em ordem: %i, %i, %i", num_3, num_2, num_1);
			}
		}
	}
}
