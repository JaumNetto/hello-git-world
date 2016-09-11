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

//Função para inicializar matriz para mostrar calendario
void iniciar_matriz(char mat[1][6],int mat2[5][6], int dias, int d)
{
	int cont=1;
	
	//Inicializar cabeçalho
	mat[0][0] = 'D';
	mat[0][1] = 'S';
	mat[0][2] = 'T';
	mat[0][3] = 'Q';
	mat[0][4] = 'Q';
	mat[0][5] = 'S';
	mat[0][6] = 'S';
	
	//inicializar com os dias da semana
	//Problema= Mostrar os dias na sequencia certa
	
	
	switch(d)
	{
		case 1:
		
	while(cont<31)
	{
			
			for(int i=0; i<5; i++)
				for(int j=0; j<6; j++)
				{	
					if(i==0 && j==0)
						mat2[0][0]=0;
					else
					{
						mat2[i][j]=cont;
						cont++;	
					}
				}
				
		}
	
			
			break;
			
	}					
	
	
	
}

//Função para exibir o calendario passado como parametro os dias daquele mês
int exibirCalendario(int diasM, int d)
{
	char mat[1][6];
	int mat2[5][6];
	int dias=1;
	
	iniciar_matriz(mat, mat2, diasM, d);
	
	//Inicializar cabeçalho
	for(int i=0; i<=6; i++)
	{
		printf("  %c ", mat[0][i]);
	}
	printf("\n");

	
	
	//Laço para colocar os dias
		for(int i=0; i<=7; i++)
		{
			for(int j = 0; j<=6; j++)
				{
					printf(" %2d ", mat2[i][j]);	
					
					if(mat2[j][i]==29)
						return 1;
					
				}
			printf("\n");	
		}
}

int calcularDiaDaSemana(int ano, int mes)
{
	int a, y, m, dias=1, d;
	
	a = (14-mes)/12;
	y = ano - a;
	
	m= mes + 12 * a - 2;
	
	int kl = (1 + y + (y/4 )- (y/100)+(y/400)+((31*m)/12));
	
	d = kl%7;
	
	return d;
	
}

main()
{
	int mes, ano, bi, d;
	
	//Pergunta pro usuario o Mês e o Ano
	scanf("%d", &mes);
	scanf("%d", &ano);
	calcularDiaDaSemana(ano, mes);
	
	//switch para chamar a funçao de exibir o Mês e colocar o cabeçalho
	switch(mes)
	{
		case 1:
			
			printf("-----------Janeiro----------\n");
			d = calcularDiaDaSemana(ano, mes);
			exibirCalendario(31, d);
			break;
		case 2:
			printf("----------Fevereiro-----------\n");
			 bi = bissexto(ano);
			if(bi==1){
				d = calcularDiaDaSemana(ano, mes);
				exibirCalendario(29,d);
				break;
				}
			else{
				d = calcularDiaDaSemana(ano, mes);
				exibirCalendario(28,d);
				break;
				}
		case 3:
			printf("----------Marco-------------\n");
			d = calcularDiaDaSemana(ano, mes);
			exibirCalendario(31,d);
			break;
		case 4:
			printf("-----------Abril------------\n");
			d = calcularDiaDaSemana(ano, mes);
			exibirCalendario(30,d);
			break;
		case 5:
			printf("------------Maio------------\n");
			d = calcularDiaDaSemana(ano, mes);
			exibirCalendario(31,d);
			break;
		case 6:
			printf("----------Junho-------------\n");
			d = calcularDiaDaSemana(ano, mes);
			exibirCalendario(30,d);
			break;
		case 7:
			printf("----------Julho-------------\n");
			d = calcularDiaDaSemana(ano, mes);
			exibirCalendario(31,d);
			break;
		case 8:
			printf("---------Agosto------------\n");
			d = calcularDiaDaSemana(ano, mes);
			exibirCalendario(31,d);
			break;
		case 9:
			printf("--------Setembro-----------\n");
			d = calcularDiaDaSemana(ano, mes);
			exibirCalendario(30,d);
			break;
		case 10:
			printf("---------Outubro-----------\n");
			d = calcularDiaDaSemana(ano, mes);
			exibirCalendario(31,d);
			break;
		case 11:
			printf("-------Novembro-----------\n");
			d = calcularDiaDaSemana(ano, mes);
			exibirCalendario(30,d);
			break;
		case 12:
			printf("--------Dezembro----------\n");
			d = calcularDiaDaSemana(ano, mes);
			exibirCalendario(31,d);
			break;
		default:
			printf("Nenhuma opção escolhida!\n");
			break;
				
	}
	
	
	
}
