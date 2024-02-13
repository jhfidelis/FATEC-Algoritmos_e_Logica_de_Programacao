/*
	Exercício 1: Escrever um programa para apresentar um menu para uma pizzaria com 7 sabores de pizzas diferentes
*/

/*
	Name: CardapioPizzaria.cpp
	Author: Henrique Fidelis
	Date: 25/03/22 09:49
	Description: Programa para escolha do sabor de pizza
*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <windows.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int opc = 0;
	
	while (1)
	{
		fflush(stdin);//limpa o buffer do teclado
		opc=0;
		system("cls");//clear scream
		puts("Sabores de pizzas:");
		puts("1 - Mussarela\n2 - Calabresa\n3 - Frango com Catupiry\n4 - Marguerita\n5 - Carne Seca\n6 - 4 Queijos\n7 - Portuguesa\n");
		puts("Escolha sua opção:");
		scanf("%d", &opc);
		
		switch(opc)
		{
			case 1: puts("\nVocê escolheu Mussarela.");
					break;
					
			case 2: puts("\nVocê escolheu Calabresa.");
					break;
			
			case 3: puts("\nVocê escolheu Frango com Catupiry.");
					break;
			
			case 4: puts("\nVocê escolheu Marguerita.");
					break;
			
			case 5: puts("\nVocê escolheu Carne Seca.");
					break;
				
			case 6: puts("\nVocê escolheu 4 Queijos.");
					break;
				
			case 7: puts("\nVocê escolheu Portuguesa.");
					break;
					
			default: puts("\nOpção INVÁLIDA!!!");
					 break;
					
		}//fim da switch
		Sleep(5000);//coloca o programa em suspensão por 5 segundos
		
	}//fim do while
	
}//fim do main
