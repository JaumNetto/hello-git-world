/*
	Name: Calendario.cpp
	Author: João Manoel de Oliveira Neto / Davi Medeiros
	Date: 04/09/16 15:51
	Description: Programa para produzir um calendario
*/
#include <stdio.h>
#include<conio.h>

//Funçao para verificar se o ano é bissexto
bissexto(int ano)
{ 
	
	if((ano%4==0)&&(ano%100!=0)||(ano%400==0))
		return 1;
}

//Função para exibir o calendario passado como parametro os dias daquele mês
int exibirCalendario(int diasM)
{
	int mat[5][6];
	int dias=1;
	
	printf("  D   S   T   Q   Q   S   S\n");
		for(int j=0; j<=6; j++)
		{
			for(int i = 1; i<=7; i++)
				{
					printf(" %2d ", dias);
					dias++;
					if(dias==diasM)
					return 1;
				}
			printf("\n");	
		}
}

main()
{
	int mes, ano;
	
	//Pergunta pro usuario o Mês e o Ano
	scanf("%d", &mes);
	scanf("%d", &ano);
	
	//switch para chamar a funçao de exibir o Mês e colocar o cabeçalho
	switch(mes)
	{
		case 1:
			printf("-----------Janeiro----------\n");
			exibirCalendario(32);
			break;
		case 2:
			printf("----------Fevereiro-----------\n");
			int bi = bissexto(ano);
			if(bi==1)
				exibirCalendario(30);
			else
				exibirCalendario(29);
				break;
				
		case 3:
			
				
				
				
	}
	
	
	
}
