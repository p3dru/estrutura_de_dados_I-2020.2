#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float base;
	printf("Digite a base: ");
	scanf("%f", &base);
	
	float altura;
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	float area = base * altura;
	
	printf("A area do retangulo eh de %.2f", area);
	
	
}
