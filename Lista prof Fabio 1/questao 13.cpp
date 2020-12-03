#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float raio;
	printf("Digite o valor do raio: ");
	scanf("%f", &raio);
	
	float volume = (((raio * raio * raio) * 4 * 3.14) / 3);
	
	printf("O volume de uma esfera que tem %.2f de raio eh de %.2f", raio, volume);
	
}
