#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int minutos;
	printf("Digite a quantidade de minutos: ");
	scanf("%i", &minutos);
	
	int horas = minutos / 60;
	
	int minutos_restantes = minutos % 60;
	
	printf("%i minutos, correspondem a %i horas e %i minutos", minutos, horas, minutos_restantes);
	
}
