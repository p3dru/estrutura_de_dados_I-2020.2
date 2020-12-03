#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float nota_1, nota_2, nota_3;
	int peso_1, peso_2, peso_3;
	printf("Digite a nota 1: ");
	scanf("%f", &nota_1);
	printf("Peso nota 1: ");
	scanf("%i", &peso_1);
	printf("Digite a nota 2: ");
	scanf("%f", &nota_2);
	printf("Peso nota 2: ");
	scanf("%i", &peso_2);
	printf("Digite a nota 3: ");
	scanf("%f", &nota_3);
	printf("Peso nota 3: ");
	scanf("%i", &peso_3);
	
	float media = (nota_1 + nota_2 + nota_3) / (peso_1 + peso_2 + peso_3);
	
	printf("\nA media eh de %.2f", media);
	
}
