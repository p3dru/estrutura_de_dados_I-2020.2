#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float kg;
	printf("Valor em kg: ");
	scanf("%f", &kg);
	
	float g = kg * 1000;
	
	printf("%.2f kg correspondem a %.2f g", kg, g);
	
}
