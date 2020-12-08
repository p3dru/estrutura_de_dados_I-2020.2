#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a, b, c, delta;
	
	float x_1, x_2;
	
	printf("Digite o valor de A (A != 0): ");
	scanf("%i", &a);
	
	printf("Digite o valor de B: ");
	scanf("%i", &b);
	
	printf("Digite o valor de C: ");
	scanf("%i", &c);
	
	delta = ((b * b) - (4 * a * c));
	delta = sqrt(delta);
	
	x_1 = ((b * -1) + delta) / (2 * a);
	
	x_2 = ((b * -1) - delta) / (2 * a);
	
	printf("As raizes são %.2f e %.2f", x_1, x_2);
	
}
