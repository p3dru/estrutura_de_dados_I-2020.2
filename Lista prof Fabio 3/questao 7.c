#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int x, contador = 0, soma = 0, numero;
	printf("Digite um valor x: ");
	scanf("%i", &x);
	
	int lista[x];
	
	soma = 0;
	
	lista[0] = 0;
	
	do{
		printf("Valor lista[%i]: ", contador + 1);
		scanf("%i", &lista[contador]);
		
		if (contador == 0){
			soma = lista[contador] + 0;
		}else{
			soma = lista[contador] + lista[contador - 1];
		}
		contador += 1;
		
		
		printf("%i\n", soma);
		
	}while(soma != x);
}
