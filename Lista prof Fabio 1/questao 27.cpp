#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float preco_fabrica, distribuidor, impostos, total;
	printf("Digite o valor de fabrica: ");
	scanf("%f", &preco_fabrica);
	
	distribuidor = (preco_fabrica * 28) / 100;
	
	impostos = (preco_fabrica * 45) / 100;
	
	total = preco_fabrica + impostos + distribuidor;
	
	printf("O valor total do carro fica: R$%.2f", total);
}
