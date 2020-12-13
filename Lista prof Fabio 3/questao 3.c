#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int mdc, numero_1, numero_2, resto_1, resto_2;
	
	printf("Numero 1: ");
	scanf("%i", &numero_1);
	
	printf("Numero 2: ");
	scanf("%i", &numero_2);
	
	if (numero_1 < numero_2){
		mdc = numero_1;
	}else{
		mdc = numero_2;
	}
	
	resto_1 = numero_1 % mdc;
	resto_2 = numero_2 % mdc;
	
	do{
		
		mdc -= 1;
		resto_1 = numero_1 % mdc;
		resto_2 = numero_2 % mdc;
		
	}while(resto_1 != resto_2);
	
	printf("MDC: %i", mdc);
}

