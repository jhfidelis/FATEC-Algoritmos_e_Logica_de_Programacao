/*
	Name:  Laco.cpp
	Author: Jos� Fidelis
	Date: 18/03/22 08:44
	Description: Programa para demostrar a utiliza��o do la�o de repeti��o "For" 
				 e exibir a tabuada de multiplica��o de um n�mero escolhido pelo usu�rio
*/

#include <stdio.h> //StanDard Imput Output
#include <conio.h> //CONsole Imput Output
#include <locale.h>// biblioteca para acentua��o

main()
{
	setlocale(LC_ALL, "portuguese");
	int num, i;
	num = 0;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	for(i=0;i < 11; i++)
		printf("\n%d X %d = %d",num, i, num*i);
		
		printf("\n\nDigite um segundo n�mero: ");
		scanf("%d",&num);
		
		for(i=10; i>=0;i--)
		printf("\n%d X %d = %d", num, i, i*num);
		
}//fim do main
