#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int valor_total;
	printf("Digite o valor total: ");
	scanf("%i", &valor_total);
	
	int prestacao = (valor_total / 3);
	
	int entrada = (valor_total / 3) + (valor_total % 3);
	
	printf("Valor da entrada:%i\nValor da prestacao: %i", entrada, prestacao);
	
}
