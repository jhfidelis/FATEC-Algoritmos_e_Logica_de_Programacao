/*
	Escreva um programa em código C que faça a leitura de um número, identifique
	se ele é par ou ímpar e apartir daí desenvolva o seguinte raciocínio:

		a.Número par – multiplicar por 5;
		b.Número ímpar – dividir por 3;
		c.Números iguais – Realizar a soma entre eles.
*/

/*
	Name: Exercicio2.cpp
	Author: Henrique Fidelis
	Date: 27/03/22 19:43
	Description: Programa para classificar se um número é par ou ímpar
*/

# include <stdio.h>//STARDARD Imput Output
# include <conio.h>//CONsole Imput Output
# include <locale.h>//biblioteca para acentuação
# include <windows.h>//

main()
{
	setlocale (LC_ALL, "Portuguese");
	int num, quoc, resto, m5, d3, soma = 0;

	printf("Digite um número inteiro: ");
	scanf("%i", &num);
	
	quoc = num / 2;
	resto = num - (quoc*2);
	
	if(resto == 0)
	{
		printf ("O resultado é: %d", num * 5);
		//(m5 = num * 5);
		//printf("%i", &m5);(forma dá erro)
		puts("\nPar");
	}
		
	else
	{
		printf ("O resultado é: %.2f", (float) num / 3);
		//float - considera apenas a parte inteira do numero
		
		//(d3 = num / 5);
		//printf("%i", &d3); (forma dá erro)
		puts("\nÍmpar");
	}

	puts("Programa finalizado");
}//fim do programa
