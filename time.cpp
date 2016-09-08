/*
	Name: Calendario.cpp
	Author: João Manoel de Oliveira Neto / Davi Medeiros
	Date: 04/09/16 15:51
	Description: Programa para produzir um calendario
*/
#include<stdio.h>
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
	printf(" ");
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

int calcularDiaDaSemana()
{
	
}

main()
{
	int mes, ano, bi;
	
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
			 bi = bissexto(ano);
			if(bi==1){
				exibirCalendario(30);
				break;
				}
			else{
				exibirCalendario(29);
				break;
				}
		case 3:
			printf("----------Marco-------------\n");
			exibirCalendario(32);
			break;
		case 4:
			printf("-----------Abril------------\n");
			exibirCalendario(31);
			break;
		case 5:
			printf("------------Maio------------\n");
			exibirCalendario(32);
			break;
		case 6:
			printf("----------Junho-------------\n");
			exibirCalendario(31);
			break;
		case 7:
			printf("----------Julho-------------\n");
			exibirCalendario(32);
			break;
		case 8:
			printf("---------Agosto------------\n");
			exibirCalendario(32);
			break;
		case 9:
			printf("--------Setembro-----------\n");
			exibirCalendario(31);
			break;
		case 10:
			printf("---------Outubro-----------\n");
			exibirCalendario(32);
			break;
		case 11:
			printf("-------Novembro-----------\n");
			exibirCalendario(31);
			break;
		case 12:
			printf("--------Dezembro----------\n");
			exibirCalendario(32);
			break;
		default:
			printf("Nenhuma opção escolhida!\n");
			break;
				
	}
	
	
	
}
