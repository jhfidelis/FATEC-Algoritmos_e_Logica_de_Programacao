/*
	Name:  ParImpar.cpp
	Author: Jos� Fidelis, Caio Morais
	Date: 18/03/22 08:44
	Description: Programa para identificar quando um n�mero � par ou �mpar
*/
//sess�o de importa��o
#include <stdio.h> //StanDard Input Output
#include <conio.h> //CONsole Input Output
#include <locale.h>// biblioteca para acentua��o

main()
{
setlocale(LC_ALL, "portuguese");
	int num, quoc, resto;
	num = quoc = resto = 0;
	
  while(1)
  {

	printf("\nDigite um n�mero: ");
	scanf("%i", &num);

	
	quoc = num / 2;
	resto = num - (quoc*2);
	
	if(resto==0)
	break;
	
	if(resto == 0)
	puts("\nPar");
	
	else puts("\n�mpar");
  
  }//fim do while
  puts("\n========> Programa finalizado com sucesso!!!");
	
}//fim do programa
