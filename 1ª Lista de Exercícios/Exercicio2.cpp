/*
	Escreva um programa em c�digo C que fa�a a leitura de um n�mero, identifique
	se ele � par ou �mpar e apartir da� desenvolva o seguinte racioc�nio:

		a.N�mero par � multiplicar por 5;
		b.N�mero �mpar � dividir por 3;
		c.N�meros iguais � Realizar a soma entre eles.
*/

/*
	Name: Exercicio2.cpp
	Author: Henrique Fidelis
	Date: 27/03/22 19:43
	Description: Programa para classificar se um n�mero � par ou �mpar
*/

# include <stdio.h>//STARDARD Imput Output
# include <conio.h>//CONsole Imput Output
# include <locale.h>//biblioteca para acentua��o
# include <windows.h>//

main()
{
	setlocale (LC_ALL, "Portuguese");
	int num, quoc, resto, m5, d3, soma = 0;

	printf("Digite um n�mero inteiro: ");
	scanf("%i", &num);
	
	quoc = num / 2;
	resto = num - (quoc*2);
	
	if(resto == 0)
	{
		printf ("O resultado �: %d", num * 5);
		//(m5 = num * 5);
		//printf("%i", &m5);(forma d� erro)
		puts("\nPar");
	}
		
	else
	{
		printf ("O resultado �: %.2f", (float) num / 3);
		//float - considera apenas a parte inteira do numero
		
		//(d3 = num / 5);
		//printf("%i", &d3); (forma d� erro)
		puts("\n�mpar");
	}

	puts("Programa finalizado");
}//fim do programa
