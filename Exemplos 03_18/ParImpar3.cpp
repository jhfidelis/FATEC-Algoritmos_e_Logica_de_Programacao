/*
	Name:  ParImpar3.cpp
	Author: Jos� Fidelis, Caio Morais
	Date: 18/03/22 11:25
	Description: Programa para identificar se o n�mero � PAR ou �MPAR por meio de uma opera��o de m�dulo.
*/
//sess�o de importa��o
#include <stdio.h> //STanDard Input Output
#include <conio.h> //CONsole Input Output
#include <locale.h>// biblioteca para acentua��o

main()
{
setlocale(LC_ALL, "portuguese");
	
	int num; 
	num=0;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d",&num);

	if(num%2 == 0)	
		puts("N�mero Par");
		else 
			puts("N�mero Impar!!!");
}
