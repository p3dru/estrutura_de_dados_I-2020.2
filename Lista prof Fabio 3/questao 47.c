#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n, primeiro, segundo, terceiro;
	
	printf("Digite o valor de N (N > 2 ): ");
	scanf("%i", &n);
	
	printf("%i termos de fibonacci: 0 1 ", n);
	
	primeiro = 0;
	segundo = 1;
	terceiro = segundo + primeiro;
	
	do{
		printf("%i ", terceiro);
		primeiro = segundo;
		segundo = terceiro;
		terceiro = segundo + primeiro;
		
		n -= 1;
		
	}while((n - 2) > 0);
	
}
