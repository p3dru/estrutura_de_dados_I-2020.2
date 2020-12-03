#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float constante = 3.6;
	
	float velocidade_km_h;
	printf("Digite uma velocidade em km/h: ");
	scanf("%f", &velocidade_km_h);
	
	float velocidade_m_s = velocidade_km_h / constante;
	
	printf("A velocidade de %.2f km/h corresponde a %.2f m/s", velocidade_km_h, velocidade_m_s);
	
}
