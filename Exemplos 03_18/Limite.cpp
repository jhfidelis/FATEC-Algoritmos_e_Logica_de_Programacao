/*
	Name:  Limite.cpp
	Author: José Fidelis, Caio Morais
	Date: 18/03/22 08:44
	Description: Programa para exibir uma contagem progressiva do limite inferior até atingir o limite superior
*/

#include <stdio.h> //StanDard Imput Output
#include <conio.h> //CONsole Imput Output
#include <locale.h>// biblioteca para acentuação

main()
{
	setlocale(LC_ALL, "portuguese");
    int Li, Ls, i;
	Li=0, Ls=0;
	
	printf("Digite o limite inferior: ");
	scanf("%i", &Li);
		
	printf("Digite o limite superior: ");
	scanf("%d", &Ls);
	

	for(Li;Li<=Ls; Li++)
	printf("\n%d",Li);
	
}//fim do main
