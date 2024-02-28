/*
	Engendre um programa que seja capaz de apurar os resultados em uma eleição
	com 3 candidatos. Ao final mostrar o resultado com os percentuais obtidos por
	cada um no pleito eleitoral. (Switch...case/While)
*/
/*
	Name: Exercício4.cpp
	Author: Henrique Fidelis
	Date: 27/03/22 22:35
	Description: Analisar resultados de uma eleição
*/

# include <stdio.h>//STARDARD Imput Output
# include <conio.h>//CONsole Imput Output
# include <locale.h>//biblioteca para acentuação
# include <windows.h>//

main()
{
 	setlocale(LC_ALL, "Portuguese");
	int opc, eleitores, i, c1, c2, c3;
	opc = eleitores = i = c1 = c2 = c3 = 0;
	
	printf("Digite a quantidade de eleitores para o pleito: ");
	scanf("%d", &eleitores);
	
	while(i < eleitores)
	{
		fflush(stdin);//limpa o buffer do teclado
		opc=0;
		system("cls");//clear scream
		puts("Lista de candidatos");
		puts("1 - Candidato1\n2 - Candidato2\n3 - Candidato3");
		printf("Escolha seu candidato: ");
		scanf("%d", &opc);
		
		switch(opc)
		{
			case 1: (c1 = c1 + 1);
			
			case 2: (c2 = c2 + 1);
				
			case 3: (c3 = c3 + 1);
		}//fim da switch
		i = i + 1;
	}//fim do while 
	scanf("%d", &c1);
	printf("%d", &c1);
}//fim do main
