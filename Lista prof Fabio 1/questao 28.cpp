#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float latao, zinco, cobre;
	printf("Digite a quantidade de latao: ");
	scanf("%f", &latao);
	
	zinco = (latao * 30) / 100;
	
	cobre = (latao * 70) / 100;
	
	
	printf("Em %.2f de latao temos %.2f kg de zinco e %.2f kg de cobre", latao, zinco, cobre);
}
