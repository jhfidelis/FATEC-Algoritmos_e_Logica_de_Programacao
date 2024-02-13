/*
	Name: Media.cpp
	Author: José Fidelis
	Date: 11/03/22 09:17
	Description: Programa para ler 3 números e obter a média
*/

//Sessão de importação
#include<stdio.h>

main()
{
	int a, b, c;
	float media;
	a = 0;
	b = 0;
	c = 0;
	media = 0.0;
	
	puts("Digite 3 numeros inteiros:");
	scanf("%d", &a);
	scanf("%i", &b);
	scanf("%d", &c);
	media = (float)(a + b + c)/ 3;
	printf("A media eh: %.3f", media);
}//fim do programa
