/*
	Name: OperacoesVetores.cpp
	Author: Daniel Rezende e Henrique Fidelis
	Date: 13/05/22 10:54
	Description: Programa para manipular vetores(array) e fazer as 4 opera��es b�sicas 
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{//In�cio 
	
	setlocale(LC_ALL, "Portuguese");
	int vet1[4], vet2[4], vetSoma[4], vetSub[4], vetMult[4];
	int i;
	float vetDiv[4];
	
	//Vetor 1
	i = 0;
	puts("Digite 4 n�meros inteiros no primeiro vetor:\n");
	//fazer a carga do primeiro vetor
	while(i<4)
	{
		scanf("%d", &vet1[i]);
		i++;	
	}
	puts("\n1� vetor carregado!\n");
	
	//Vetor 2
	i = 0;
	puts("Digite 4 n�meros inteiros no segundo vetor:\n");
	//fazer a carga do segundo vetor
	while(i<4)
	{
		scanf("%d", &vet2[i]);
		i++;	
	}
	puts("\n2� vetor carregado!");
	
	//soma dos vetores
	for(i = 0; i<4; i++)	
		vetSoma[i] = vet1[i] + vet2[i];
	
	//divis�o dos vetores 1 e 2
	for(i = 0; i<4; i++)	
		vetDiv[i] = (float)vet1[i] / vet2[i];

	//Imprimindo o PRIMEIRO vetor
	puts("\nConte�do do primeiro vetor: ");
	for(i = 0; i < 4; i++)
		printf("%d|", vet1[i]);
		
	//Imprimindo o SEGUNDO vetor
	puts("\nConte�do do segundo vetor: ");
	for(i = 0; i < 4; i++)
		printf("%d|", vet2[i]);
	
	//Imprimindo a SOMA dos vetores
	puts("\nSoma dos vetores: ");
	for(i = 0; i < 4; i++)
		printf("%d|", vetSoma[i]);
	
	//Imprimindo a DIVIS�O vetores
	puts("\nDivis�o dos vetores 1 e 2: ");
	for(i = 0; i < 4; i++)
		printf("%.2f|", vetDiv[i]);
		
	//Imprimindo somente os elementos dos indices pares do vetor divis�o
	puts("\nConte�do dos indices pares do vetor divis�o: ");
	for(i = 0; i < 4; i++)
		if(i%2 == 0)
			printf("%.2f|", vetDiv[i]);
			
//Fazer a subtra��o dos vetores
	puts("\nSubtra��o dos vetores 1 e 2");
	i = 0;
	while(i < 4)
		{
			vetSub[i] = vet1[i] - vet2[i];
			i = i + 1;
		}
//Imprimindo a subtra��o dos vetores
	for(i = 0; i < 4; i++)
		printf("%d|", vetSub[i]);
//Fazer a multiplica��o dos vetores
	puts("\nMultiplica��o dos vetores 1 e 2");
	i = 0;
	while(i < 4)
		{
			vetMult[i] = vet1[i] * vet2[i];
			i = i + 1;
		}
//Imprimindo a multiplica��o dos vetores
	for(i = 0; i < 4; i++)
		printf("%d|", vetMult[i]);
//Impirmindo somente os indices �MPARES da divis�o
	puts("\nConte�do dos indices �MPARES do vetor divis�o: ");
	for(i = 0; i < 4; i++)
		if(i%2 == 1)
			printf("%.2f|", vetDiv[i]);
}//fim 
