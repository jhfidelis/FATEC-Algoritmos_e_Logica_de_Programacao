/*
Fazer um programa capaz de realizar a leitura de altura, peso e idade
para uma população de ï¿½nï¿½ pessoas e calcular todas as médias tanto para 
homens quanto para as mulheres.
*/

/*
	Name: Exercicio1.cpp
	Author: Henrique Fidelis
	Date: 27/03/22 19:09
	Description: Programa para ler dados de uma população e calcular médias
*/

# include <stdio.h>//STARDARD Imput Output
# include <conio.h>//CONsole Imput Output
# include <locale.h>//biblioteca para acentuaï¿½ï¿½o
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
	printf("Digite a população da sua região: "); scanf("%i", &pop);
}
