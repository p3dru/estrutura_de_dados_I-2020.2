#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int n, primeiro = 0, segundo = 1, terceiro, contador = 2;
	printf("Digite a quantidade de termos (sempre > 2): ");
	scanf("%i", &n);
	
	int fibonacci[n];
	
	fibonacci[0] = primeiro;
	fibonacci[1] = segundo;
	
	do{
		terceiro = segundo + primeiro;
		fibonacci[contador] = terceiro;
		primeiro = segundo;
		segundo = terceiro;
		contador += 1;
	}while (contador < n);
	
	contador = 0;
	
	printf("\nSequencia Fibonacci com %i elementos: ", n);
	
	do{
		printf("%i ", fibonacci[contador]);
		contador += 1;
	}while(contador < n);
}
