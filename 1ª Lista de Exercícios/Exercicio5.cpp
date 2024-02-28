/*
	Faça um programa na linguagem C que mostre na tela uma determinada frase
	pela quantidade de vezes em que o usuário escolher.(Do...while)
*/

/*
	Name: Exercicio5.cpp
	Author: Henrique Fidelis
	Date: 31/03/22 11:07
	Description: Mostrar frases pela quantidade de vezes que o usuário escolher
*/

# include <stdio.h>//STARDARD Imput Output
# include <conio.h>//CONsole Imput Output
# include <locale.h>//biblioteca para acentuação
# include <windows.h>//

main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, rep;
	i = rep = 0;
	
	printf("Digite a quantidade de vezes para a frase ser repetida: ");
	scanf("%d", &rep);
	puts("\n");
	
	do
	{
		puts("Frase escolhida");
		i = i + 1;

	}while(i < rep);
	
	puts("\n\nPrograma Finalizado!!!");
}//fim do main
