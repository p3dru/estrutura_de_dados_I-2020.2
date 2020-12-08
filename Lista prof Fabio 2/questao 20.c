#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
	float nota_1, nota_2, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota_1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota_2);
	
	media = (nota_1 + nota_2) / 2;
	
	char conceito, situacao;
	
	if ((media >= 9) && (media <= 10))
	{
		printf("\nNota 1: %.2f\nNota 2: %.2f\nMedia: %.2f\nConceito: %c\nSituacao: Aprovado\n", nota_1, nota_2, media, 'A');
	}
	else if ((media >= 7.5) && (media <= 9))
	{
		printf("\nNota 1: %.2f\nNota 2: %.2f\nMedia: %.2f\nConceito: %c\nSituacao: Aprovado\n", nota_1, nota_2, media, 'B');
	}
	else if ((media >= 6) && (media <= 7.5))
	{
		printf("\nNota 1: %.2f\nNota 2: %.2f\nMedia: %.2f\nConceito: %c\nSituacao: Aprovado\n", nota_1, nota_2, media, 'C');
	}
	else if ((media >= 4) && (media <= 6))
	{
		printf("\nNota 1: %.2f\nNota 2: %.2f\nMedia: %.2f\nConceito: %c\nSituacao: Reprovado\n", nota_1, nota_2, media, 'D');
	}
	else
	{
		printf("\nNota 1: %.2f\nNota 2: %.2f\nMedia: %.2f\nConceito: %c\nSituacao: Reprovado\n", nota_1, nota_2, media, 'E');
	}
	system("pause");
	
	return 0;
}
