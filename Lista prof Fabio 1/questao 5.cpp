#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int algarismo;
	printf("Digite um numero de 3 algarismos: ");
	scanf("%i", &algarismo);
	
	int centenas = algarismo / 100;
	
	int dezenas = (algarismo % 100) / 10;
	
	int unidades = (algarismo % 100) % 10;
	
	printf("O numero %i ao inverso fica %i%i%i", algarismo, unidades, dezenas, centenas);
	
}
