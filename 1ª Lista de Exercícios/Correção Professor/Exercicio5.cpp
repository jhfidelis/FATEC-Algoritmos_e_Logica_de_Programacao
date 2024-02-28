/*
	Name: RepeteFrase.cpp (exercicio 5)
	Author: Luana Camargo
	Date: 01/04/22 09:00
	Description: Programa para repetir uma frase pela quantidade que o usuário escolher
*/

# include <stdio.h>

main()
{
	int vezes= 0;
	int cont;
	printf ("Repete a frase por quantas vezes? ");
	scanf ("%d", &vezes);
	
	cont = 0;
	do
	{	
	puts ("QUERO MERENDAAA !!!! ");
	cont = cont + 1;
	
	
	}while(cont < vezes);
	
	puts ("\n\===>>>> Programa Finalizado !! <<<====");
	
	
	}//fim do programa

