/*
	Name: Repete.cpp
	Author: Jos� Fidelis
	Date: 11/03/22 11:18
	Description: Programa para demostrar o la�o de repeti��o
				 "Repita at�", "Do...while"
*/

#include<stdio.h>

main()
{
	int cont;
	cont = 7;
	
	do
	{
		puts("Teste de loop");
		cont = cont + 1;
	}while(cont < 10);
}//fim do main
