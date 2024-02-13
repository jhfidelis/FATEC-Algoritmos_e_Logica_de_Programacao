/*
	Name: Regressivo.cpp
	Author: José Fidelis
	Date: 11/03/22 11:33
	Description: Programa para mostrar uma contagem regressiva
*/

#include<stdio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int num = 0;
	
	printf("Digite um número para iniciar a contagem regressiva: ");
	scanf("%d", &num);
	
	while(num >= 0)
	{
		printf("%d ", num);
		num = num - 1;
	}
	puts("FOGO!!!");
}//fim do main
