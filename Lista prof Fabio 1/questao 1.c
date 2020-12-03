#include <stdio.h>
#include <stdlib.h>



int main() {
	
	float constante = 3.6;
	
	float velocidade;
	printf("Digite a velocidade em m/s: \n");
	scanf("%f", &velocidade);
	
	float velocidade_km_h = velocidade * constante;
	
	printf("A velocidade de %.2f m/s equivale a %.2f de km/h", velocidade, velocidade_km_h);
	
	return 0;
}
