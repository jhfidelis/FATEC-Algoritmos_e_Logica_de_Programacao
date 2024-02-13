/*
	Name: MaiorVetor.cpp
	Author: Henrique Fidelis
	Date: 20/05/22 09:28
	Description: Programa para ler 10 números e identificar o maior e o nenor número
*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>

main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	int vetNum[10];
	int maior, menor, i;
	maior = menor = i = 0;
	
	puts("Digite 10 números:");
	do
	{
		scanf("%d", &vetNum[i]);
		i++;
	}while(i < 10);
	
	maior = vetNum[0];
	menor = vetNum[0];
		
	for(i = 0; i < 10; i++)
		{
			if(vetNum[i] < menor) {
				menor = vetNum[i];
			}
			
			if(vetNum[i] > maior) {
				maior = vetNum[i];
			}
		}
	printf("Maior = %d e Menor = %d", maior, menor);
}
