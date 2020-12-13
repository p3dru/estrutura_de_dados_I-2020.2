#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n, primeiro = 1, contador = 2;
	
	printf("Digite o valor de N: ");
	scanf("%i", &n);
	
	
	printf("%i termos da sequencia: ", n);
	
	while(n > 0){
		printf("%i ", primeiro);
		primeiro += contador;
		contador += 1;
		n -= 1;
	}
}
