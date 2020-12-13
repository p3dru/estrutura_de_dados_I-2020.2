#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a_0, limite, razao;
	
	printf("A0: ");
	scanf("%i", &a_0);
	
	printf("Razao: ");
	scanf("%i", &razao);
	
	printf("Limite: ");
	scanf("%i", &limite);
	
	printf("PA: ");
	
	while(a_0 < limite){
		printf("%i ", a_0);
		a_0 += razao;
	}
} 
