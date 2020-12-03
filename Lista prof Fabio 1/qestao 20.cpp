#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int horas;
	printf("Digite o numero de horas: ");
	scanf("%i", &horas);
	
	int semanas = horas / 168;
	
	int dias = (horas % 168) / 24;
	
	int horas_restantes = (horas % 168) % 24;
	
	printf("%i horas correspondem a %i semanas, %i dias e %i horas", horas, semanas, dias, horas_restantes);
	
}
