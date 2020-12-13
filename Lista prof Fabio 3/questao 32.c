#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n, contador = 1;
	
	printf("Digite N: ");
	scanf("%i", &n);
	
	while(contador <= n){
		printf("%i\n", contador);
		contador += 1;
	}
}
