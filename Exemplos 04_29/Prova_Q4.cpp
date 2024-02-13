/*
	Name: Prova_Q4
	Author: Henrique Fidelis
	Date: 29/04/22 11:08
	Description: Resolução da questão número 4 da P!. Teste de mesa
*/

# include <stdio.h>
# include <conio.h>

main()
{
	int x, b, pim, i, cont;
	x = 0;
	b = 3;
	pim = 25;
	cont = 0;
	
	for(i = 4;b < pim; i = i + 1)
	{
		x = x + i;
		b = b + 2;
		pim = pim - x;
		cont++;
	}//fim do 'for'
	
	puts("Resultados");
	printf("\nx = %d", x);
	printf("\nb = %d", b);
	printf("\npim = %d", pim);
	printf("\ni = %d", i);
	printf("\npassou no laco por %d vezes", cont);
}//fim do programa
