#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float km;
	printf("Valor em km: ");
	scanf("%f", &km);
	
	float m = km * 1000;
	
	printf("%.2f km correspondem a %.2f m", km, m);
}
