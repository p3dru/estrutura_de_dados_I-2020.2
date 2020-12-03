#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int metros;
	printf("Digite a quantidade de metros: ");
	scanf("%i", &metros);
	
	int km = metros / 1000;
	
	int metros_restantes = metros % 1000;
	
	printf("%i metros equivalem a %i km e %i metros", metros, km, metros_restantes);
	
}
