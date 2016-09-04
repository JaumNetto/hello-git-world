/*
	Name: Calendario.cpp
	Author: João Manoel de Oliveira Neto / Davi Medeiros
	Date: 04/09/16 15:51
	Description: Programa para produzir um calendario
*/
#include <stdio.h>
#include<conio.h>

bissexto(int ano)
{ 
	
	if((ano%4==0)&&(ano%100!=0)||(ano%400==0))
		return 1;
}

pergunta()
{
	int mes, ano;;
	
	
	scanf("%d", &mes);
	scanf("%d", &ano);

}

iniciar meses()
{
	int jan,fev,mar,abr,mai,jun,jul,ago,set,out,nov,dez;
	
	jan=31;
	if(bissexto = 1)
		fev = 29;
	else
		fev = 28;
	mar = 31;
	abr= 30;
	mai = 31;
	jun = 30;
	jul = 31;
	ago = 31;
	set = 30;
	out = 31;
	nov = 30;
	dez = 31;
	
}



main()
{
	
}
