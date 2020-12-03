#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int meses;
	printf("Digite a quantidade de meses: ");
	scanf("%i", &meses);
	
	int anos = meses / 12;
	
	int meses_restantes = meses % 12;
	
	printf("%i mes(es) equivalem a %i ano(s) e %i mese(es)", meses, anos, meses_restantes);
	
	
}
