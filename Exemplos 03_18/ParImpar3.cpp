/*
	Name:  ParImpar3.cpp
	Author: José Fidelis, Caio Morais
	Date: 18/03/22 11:25
	Description: Programa para identificar se o número é PAR ou ÍMPAR por meio de uma operação de módulo.
*/
//sessão de importação
#include <stdio.h> //STanDard Input Output
#include <conio.h> //CONsole Input Output
#include <locale.h>// biblioteca para acentuação

main()
{
setlocale(LC_ALL, "portuguese");
	
	int num; 
	num=0;
	
	printf("Digite um número inteiro: ");
	scanf("%d",&num);

	if(num%2 == 0)	
		puts("Número Par");
		else 
			puts("Número Impar!!!");
}
