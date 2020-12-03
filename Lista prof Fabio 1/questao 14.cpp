#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float celsius;
	printf("Digite uma temperatra em graus celsius: ");
	scanf("%f", &celsius);
	
	float para_f = (9 * celsius + 160) / 5;
	
	printf("A temperatura %.1fC° corresponde a %.1fF°", celsius, para_f);
	
}
