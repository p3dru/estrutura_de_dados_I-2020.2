#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float raio;
	printf("Digite o valor do raio: ");
	scanf("%f", &raio);
	
	float comprimento = raio * 3.14 * 2;
	
	printf("O comprimento de um circunferência que tem raio %.2f eh de %.2f", raio, comprimento);
	
}
