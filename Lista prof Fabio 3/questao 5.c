#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float x, n, div;
	
	printf("Valor de x: ");
	scanf("%f", &x);
	
	printf("Valor de n: ");
	scanf("%f", &n);
	
	while (n >= 2){
		div = x / n;
		x = div;
		n -= 1;
	}
	printf("Ultima divisao: %.2f", x);
}
