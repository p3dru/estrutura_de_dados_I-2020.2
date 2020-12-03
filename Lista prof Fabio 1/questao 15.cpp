#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float de_f;
	printf("Digite um valor em F°: ");
	scanf("%f", &de_f);
	
	float celso = (5 * de_f - 160) / 9;
	
	printf("%.1f F° equivalem a %.1f C°", de_f, celso);
}
