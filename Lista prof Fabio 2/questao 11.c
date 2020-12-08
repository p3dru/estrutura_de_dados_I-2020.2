#include <stdio.h>
#include <stdlib.h>

int main()
{
	int hora_inicio, minuto_inicio, hora_termino, minuto_termino, horas_totais, minutos_totais;
	
	printf("Digite a hora de inicio: ");
	scanf("%i", hora_inicio);
	
	printf("Digite a minuto de inicio: ");
	scanf("%i", minuto_inicio);
	
	printf("Digite a hora de termino: ");
	scanf("%i", hora_termino);
	
	printf("Digite a minuto de termino: ");
	scanf("%i", minuto_termino);
	
	if (hora_inicio > hora_termino)
	{
		horas_totais = (24 - hora_inicio) + hora_termino;
		
		if (minuto_inicio > minuto_termino)
		{
			minutos_totais = (60 - minuto_inicio) + minuto_termino;
		}
		else
		{
			minutos_totais = minuto_termino - minuto_inicio;
		}
	}
	else
	{
		horas_totais = hora_termino - hora_inicio;
		
		if (minuto_inicio > minuto_termino)
		{
			minutos_totais = (60 - minuto_inicio) + minuto_termino;
		}
		else
		{
			minutos_totais = minuto_termino - minuto_inicio;
		}
	}
	
	printf("O total jogado foi de %i horas e %i minutos", horas_totais, minutos_totais);
}
