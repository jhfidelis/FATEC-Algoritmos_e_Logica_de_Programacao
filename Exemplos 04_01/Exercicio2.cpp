/*
	Name: ParOuImpar.cpp (exercicio 2 )
	Author: Luana Camargo, Henrique Fidelis
	Date: 01/04/22 08:51
	Description: Programa para classificar se um número é par ou ímpar
				Se o número for par, multiplicá-lo por 5
				Se o número for ímpar, dividí-lo por 3
*/

# include <stdio.h>

main()
{
	int num = 0;
	int resto, quoc;
	resto = quoc = 0;
	
	printf ("Digite um numero: ");
	scanf ("%d", &num);
	
	quoc = num / 2;
	resto = num - (quoc *2);
	
	if(resto == 0)
		printf ("O resultado eh: %d", num * 5);
	else
		printf ("O resultado eh: %.2f", (float) num / 3);
		//float - considera apenas a parte inteira do numero
	
}//fim do programa
