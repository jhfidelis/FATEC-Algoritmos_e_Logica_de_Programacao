/*
	Name:  Laco.cpp
	Author: José Fidelis
	Date: 18/03/22 08:44
	Description: Programa para demostrar a utilização do laço de repetição "For" 
				 e exibir a tabuada de multiplicação de um número escolhido pelo usuário
*/

#include <stdio.h> //StanDard Imput Output
#include <conio.h> //CONsole Imput Output
#include <locale.h>// biblioteca para acentuação

main()
{
	setlocale(LC_ALL, "portuguese");
	int num, i;
	num = 0;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	for(i=0;i < 11; i++)
		printf("\n%d X %d = %d",num, i, num*i);
		
		printf("\n\nDigite um segundo número: ");
		scanf("%d",&num);
		
		for(i=10; i>=0;i--)
		printf("\n%d X %d = %d", num, i, i*num);
		
}//fim do main
