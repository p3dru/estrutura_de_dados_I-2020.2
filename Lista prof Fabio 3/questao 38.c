#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n, soma, contador;
	
	printf("N: ");
	scanf("%i", &n);
	
	soma = 0;
	
	contador = 1;
	
	while(contador <= n){
		soma += contador;
		contador += 1;
	}
	printf("A soma eh: %i", soma);
}

