#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float salario;
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	
	float aumento = (salario / 100) * 25;
	
	float salario_aumentado = salario + aumento;
	
	printf("Seu novo salario sera de %.2f", salario_aumentado);
		
}
