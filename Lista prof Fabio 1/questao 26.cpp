#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float anos_no_vicio, cigarros, carteira, preco_cigarro, total_gasto;
	printf("A quantos anos voce fuma: ");
	scanf("%f", &anos_no_vicio);
	
	printf("Quantos cigarros voce fuma por dia: ");
	scanf("%f", &cigarros);
	
	printf("Preco da carteira: ");
	scanf("%f", &carteira);
	
	preco_cigarro = carteira / 20;
	
	total_gasto = (preco_cigarro * cigarros) * (anos_no_vicio * 365);
	
	printf("Ao todo voce ja gastou R$ %.2f reais no cigarro", total_gasto); 
	
}
