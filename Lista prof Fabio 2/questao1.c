#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num_1, num_2;
	
	printf("Digite o primeiro numero: ");
	scanf("%i", &num_1);
	
	printf("Digite o segundo numero: ");
	scanf("%i", &num_2);
	
	if (num_1 > num_2)
	{
		printf("O maior eh o: %i", num_1);
	}
	else
	{
		printf("O maior eh o: %i", num_2);
	}
	
	return 0;
	
}
