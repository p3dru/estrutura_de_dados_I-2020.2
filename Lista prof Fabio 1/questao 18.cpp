#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float m;
	printf("Valor em m: ");
	scanf("%f", &m);
	
	float cm = m * 100;
	
	printf("%.2f m correspondem a %.2f cm", m, cm);
	
}
