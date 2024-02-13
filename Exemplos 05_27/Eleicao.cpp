/*
	Name: Eleicao.cpp
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
	int c1, c2, c3, br, nulo, opc, qtd, i;
	c1 = c2 = c3 = br = nulo = opc = qtd = i = opc = 0;
	
	printf("Digite a quantidade de eleitores: ");
	scanf("%d", &qtd);
	
	while(i < qtd)
	{
		puts("1 - Candidato1\n2 - Candidato2\n3 - Candidato3");
		puts("4 - Voto Branco\n5 - Voto Nulo");
		printf("Escolha seu candidato: ");
		scanf("%d", &opc);
		
		switch(opc)
		{
			case 1: (c1 = c1 + 1);
					break;
			
			case 2: (c2 = c2 + 1);
					break;
					
			case 3: (c3 = c3 + 1);
					break;
			
			case 4: br++;
					break;
					
			case 5: nulo++;
					break;
		}//fim da switch
		i = i + 1;
	}//fim do while
	
	printf("\nCandidato 1: %d", c1);
	printf("\nCandidato 2: %d", c2);
	printf("\nCandidato 3: %d", c3);
	printf("\nVotos Branco: %d", br);
	printf("\nVotos Nulo: %d", nulo);
}//fim do programa
