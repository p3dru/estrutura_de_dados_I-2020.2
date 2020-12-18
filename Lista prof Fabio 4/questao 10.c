#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int len, contador = 0;
	printf("Digite o tamanho: ");
	scanf("%i", &len);
	
	float vetor[len], soma, media;
	
	do{
		printf("Digite o valor da posicao %i: ", contador);
		scanf("%f", &vetor[contador]);
		soma += vetor[contador];
		contador ++;
	}while(contador < len);
	
	media = soma / len;
	
	printf("\nA soma dos numeros lidos eh: %.2f\nE a media eh %.2f", soma, media);
}
