/*
	Elabore um programa que faça a leitura de idade para uma população de 10
	pessoas e aponte qual a idade do mais velho e a idade do mais novo.
*/
/*
	Name: Exercicio3.cpp
	Author: Henrique Fidelis
	Date: 27/03/22 21:14
	Description: Programa para ler 10 idades e identificar a maior e menor idade
*/

# include <stdio.h>//STARDARD Imput Output
# include <conio.h>//CONsole Imput Output
# include <locale.h>//biblioteca para acentuação
# include <windows.h>//

main()
{
	setlocale (LC_ALL, "Portuguese");
	int idade, velho, novo, i;
	idade = velho = novo = i = 0;
	
	printf("Digite uma idade: ");
	scanf("%d", &idade);
	velho = idade;
	novo = idade;
	
	while(i < 9)
		{
			printf("Digite uma idade: ");
			scanf("%d", &idade);
			i = i + 1;
			
			if (idade > velho)
				velho = idade;
				
			if (idade < novo)
				novo = idade;
		}
		
	printf("O mais novo é: %d\n", novo);
	printf("O mais velho é: %d\n", velho);
	//Comando para aparecer maior e menor idade\\
	
	/*printf("Digite uma idade: ");
	scanf("%d", &idade);
	
	for(i=0;i < 11; i++)
	printf("Digite uma idade: ");
	scanf("%d", &idade);
	*/
}
