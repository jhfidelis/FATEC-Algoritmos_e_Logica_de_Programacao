/*
	Name: Eleicao(Case).cpp
	Author: Henrique Fidelis
	Date: 20/05/22 10:44
	Description: Programa para realizar uma eleição entre 3 candidatos
	
	3 canditados, brancos e nulos
	mostrar qte de votos de todos e quem ganhou a eleição
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	int opc, c1, c2, c3, br, nulo;
	opc = c1 = c2 = c3 = br = nulo = 0;
	
	while(1)
	{
		fflush(stdin); //limpa o buffer do teclado
		opc = 0;
		system("cls"); //clear scream
		puts("Lista de candidatos");
		puts("1 - Candidato1\n2 - Candidato2\n3 - Candidato3");
		puts("4 - Voto Branco\n4 - Voto Nulo");
		printf("\nEscolha seu candidato: ");
		scanf("%d", &opc);
		
		switch(opc)
		{
			case 1: (c1 = c1 + 1);
				break;
			case 2: (c2 = c2 + 1);
				break;
			case 3: (c3 = c3 + 1);
				break;
			case 4: (br = br + 1);
				break;
			case 5: (nulo = nulo + 1);
				break;
			case 0: puts("Eleição encerrada!");
				printf("Candidato 1: %d | Candidato 2: %d | Candidato 3: %d", c1, c2, c3);
				exit(0);	
				break;
			default: puts("Opção Inválida!");
				break;
		}//fim do switch
		
		printf("Candidato 1: %d | Candidato 2: %d | Candidato 3: %d", c1, c2, c3);
		Sleep(3000);
	}//fim do while
}//fim do programa
