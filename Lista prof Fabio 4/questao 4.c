#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int a[20], contador = 0, s;
	
	do{
		
		printf("Valor da posicao %i: ", contador);
		scanf("%i", &a[contador]);
		
		contador += 1;
		
	}while(contador < 20);
	
	s = ((a[0] - a[19]) * (a[0] - a[19]))\
	-  ((a[1] - a[18]) * (a[1] - a[18]))\
	- ((a[2] - a[17]) * (a[2] - a[17]))\
	- ((a[3] - a[16]) * (a[3] - a[16]))\
	- ((a[4] - a[15]) * (a[4] - a[15]))\
	- ((a[5] - a[14]) * (a[5] - a[14]))\
	- ((a[6] - a[13]) * (a[6] - a[13]))\
	- ((a[7] - a[12]) * (a[7] - a[12]))\
	- ((a[8] - a[11]) * (a[8] - a[11]))\
	- ((a[9] - a[10]) * (a[9] - a[10]));
	
	printf("O valor de S eh: %i", s);
	
}
