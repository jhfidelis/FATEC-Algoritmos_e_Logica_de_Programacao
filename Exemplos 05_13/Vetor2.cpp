/*
	Name: Vetor2.cpp
	Author: Henrique Fidelis
	Date: 13/05/22 10:56
	Description: Programa para somar vetores
*/

# include <conio.h>
# include <stdio.h>

main()
{
	int vet1[4], vet2[4], vetSoma[4];
	float vetDivi[4];
	int i1, i2, i3, i;
	
	i1 = 0;
	puts("Digite 4 numeros para o 1o vetor:");
	while(i1 <= 3)
	{
		scanf("%d", &vet1[i1]);
		i1 = i1 + 1;
	}
	puts("Vetor 1 carregado!");
	
	i2 = 0;
	puts("\nDigite 4 numeros para o 2o vetor:");
	while(i2 <= 3)
	{
		scanf("%d", &vet2[i2]);
		i2 = i2 + 1;
	}
	puts("Vetor 2 carregado!");
	
	i1 = i2 = i3 = 0;
	
	do
	{
		vetSoma[i3] = vet1[i1] + vet2[i2];
		i1 = i1 + 1;
		i2 = i2 + 1;
		i3 = i3 + 1;
	}while(i3 <= 3);
	
	puts("\nSoma dos vetores");
	i3 = 0;
	do
	{
		printf("%d|", vetSoma[i3]);
		i3 = i3 + 1;
	}while(i3 <= 3);
	
	i1 = i2 = i3 = 0;
	
	do
	{
		vetDivi[i3] = (float) vet1[i1] / vet2[i2];
		i1 = i1 + 1;
		i2 = i2 + 1;
		i3 = i3 + 1;
	}while(i3 <= 3);

	puts("\n\nDivisao dos vetores");
	i3 = 0;
	do
	{
		printf("%.2f|", vetDivi[i3]);
		i3 = i3 + 1;
	}while(i3 <= 3);
	
	//imprimindo os valores dos indices pares do vetor Divisão
	puts("\n\nConteudo dos indices PARES do vetor DIVISAO");
	for(i = 0; i < 4; i++) {
		if(i%2 == 0)
		printf("%.2f|", vetDivi[i]);
	}

}
