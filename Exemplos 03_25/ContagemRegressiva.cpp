/*
	Name: ContagemRegressiva.cpp
	Author: Henrique Fidelis
	Date: 25/03/22 09:33
	Description: Programa para exibir uma contagem regressiva para o lançamento de um foguete
*/

# include <windows.h>
# include <stdio.h>

main()
{
	int tempo;
	tempo = 0;
	
	printf("Digite o tempo da contagem regressiva: ");
	scanf("%d", &tempo);
	
	for(int i = tempo; i>=0; i--)
	{
		printf("\n%d", i);
		Sleep(1000);
	}//fim do for
	puts("\nFOGO!!!");
	
}//fim do main
