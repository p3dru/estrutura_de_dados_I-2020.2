#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dia_atual, mes_atual, ano_atual, dia_nasc, mes_nasc, ano_nasc;
	
	printf("Dia atual: ");
	scanf("%i", &dia_atual);
	
	printf("Mes atual: ");
	scanf("%i", &mes_atual);
	
	printf("Ano atual: ");
	scanf("%i", &ano_atual);
	
	printf("Dia de nascimento: ");
	scanf("%i", &dia_nasc);
	
	printf("Mes de nascimento: ");
	scanf("%i", &mes_nasc);
	
	printf("Ano de nascimento: ");
	scanf("%i", &ano_nasc);
	
	int dias_totais = (dia_atual + (mes_atual * 30) + (ano_atual * 365)) - (dia_nasc + (mes_nasc * 30) + (ano_nasc *365));
	
	int anos_totais = (dias_totais / 365);
	
	printf("A idade exata em anos eh de %i", anos_totais);
	
	return 0;
}
