#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int dia_nasc, mes_nasc, ano_nasc, dia_atual, mes_atual, ano_atual, total_dias_nasc, total_dias_atual;
	
	printf("Digite o dia do seu nascimento: ");
	scanf("%i", dia_nasc);
	
	printf("Digite o mes do seu nascimento: ");
	scanf("%i", mes_nasc);
	
	printf("Digite o ano do seu nascimento: ");
	scanf("%i", ano_nasc);
	
	printf("Digite o dia atual: ");
	scanf("%i", dia_atual);
	
	printf("Digite o mes_atual: ");
	scanf("%i", mes_atual);
	
	printf("Digite o ano_atual: ");
	scanf("%i", ano_atual);
	
	total_dias_nasc = dia_nasc + (mes_nasc * 30) + (ano_nasc * 365);
	
	total_dias_atual = dia_atual + (mes_atual * 30) + (ano_atual * 365);
	
	int dias_totais, ano, mes, dia;
	
	dias_totais = total_dias_atual - total_dias_nasc;
	
	ano = dias_totais / 365;
	
	mes = (dias_totais % 365) / 30;
	
	dia = (dias_totais % 365) % 30;
	
	printf("Você tem %i anos, %i meses e %i dias", ano, mes, dia);
	
	
}	

