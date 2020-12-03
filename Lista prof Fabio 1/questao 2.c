#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float dolar_hj;
	printf("Digite o preco do dolar: ");
	scanf("%f", &dolar_hj);
	
	float dolares_totais;
	printf("Digite a quantia que deseja converter: ");
	scanf("%f", &dolares_totais);
	
	float total_rs = dolares_totais * dolar_hj;
	
	printf("A quantida de %.2f dolares eh convertida em %.2f reais, considerando o dolar a %.2f", dolares_totais, total_rs, dolar_hj);
	
	return 0;
}
