#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
	char letra;
	printf("Digite uma letra: ");
	scanf("%c", &letra);
	
	if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra =='U')
	{
		printf("A letra digitada eh uma vogal\n");
	}
	else
	{
		printf("A letra digitada eh uma consoante\n");	
	}

system("pause");

return 0;

}
