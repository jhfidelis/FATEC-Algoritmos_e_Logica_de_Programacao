/*
	Name: Idades.cpp
	Author: José Fidelis
	Date: 11/03/22 10:54
	Description: Programa para classificar a faixa etária
*/

#include<stdio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int idade;
	idade = 0;
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	
	if(idade <= 12)
		puts("Você é uma Criança!!");
	else if  (idade <= 19)
			puts ("Adolescente");
		 else if (idade <= 59)
				puts ("Adulto");
			  else 
			  	puts("Você já é vovô...");
	
}//fim do programa
