#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float base;
	printf("Digite a base do triangulo: ");
	scanf("%f", &base);
	
	float altura;
	printf("Digite a altura do triangulo: ");
	scanf("%f", &altura);
	
	float area = (base * altura) / 2;
	
	printf("A area do trinagulo eh de %.2f", area);
	
	
}
