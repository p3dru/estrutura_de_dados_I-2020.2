#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float lado;
	printf("Lado do quadrado: ");
	scanf("%f", &lado);
	
	float area = lado * lado;
	
	printf("A area do quadrado eh %.2f", area);
	
}
