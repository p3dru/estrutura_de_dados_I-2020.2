#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int dividendo;
	printf("Digite um valor para o dividendo: ");
	scanf("%i", &dividendo);
	
	int divisor;
	printf("Digite um valor para o divisor: ");
	scanf("%i", &divisor);
	
	int resto_div = dividendo % divisor;
	
	int quociente = dividendo / divisor;
	
	printf("O resto da divisão entre %i e %i eh %i e o quociente eh %i", dividendo, divisor, resto_div, quociente);
}
