/*
Fazer um programa capaz de realizar a leitura de altura, peso e idade
para uma popula��o de �n� pessoas e calcular todas as m�dias tanto para 
homens quanto para as mulheres.
*/

/*
	Name: Exercicio1.cpp
	Author: Henrique Fidelis
	Date: 27/03/22 19:09
	Description: Programa para ler dados de uma popula��o e calcular m�dias
*/

# include <stdio.h>//STARDARD Imput Output
# include <conio.h>//CONsole Imput Output
# include <locale.h>//biblioteca para acentua��o
# include <windows.h>//

main()
{
	setlocale (LC_ALL, "Portuguese");
	int idade, pop;
	float alt, peso, media;
	char sexo;
	
	idade = pop = 0;
	alt = peso = media = 0.0;
	sexo =' ';
	
	printf("Digite sua altura: "); scanf("%f", &alt);
	printf("Digite seu peso: "); scanf("%f", &peso);
	printf("Digite sua idade: "); scanf("%d", &idade);
	printf("Digite seu sexo: "); scanf(" %c", &sexo);
	printf("Digite a popula��o da sua regi�o: "); scanf("%i", &pop);
}
