#include <stdio.h>
#include <stdlib.h>

int main()
{
	float nota_1, nota_2, prova_final;
	
	printf("Digite a primeira nota :");
	scanf("%f", &nota_1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota_2);
	
	float media = (nota_1 + nota_2) / 2; 
	
	if (media >= 7)
	{
		printf("Aprovado");
	}
	else
	{
		printf("Digite a prova final: ");
		scanf("%f", &prova_final);
		
		float media_final = (media + prova_final) / 2;
		
		if (media_final >= 6)
		{
			printf("Aprovado");
		}
		else
		{
			printf("Reprovado");
		}
	}
} 
