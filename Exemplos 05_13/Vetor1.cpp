/*
	Name: Vetor1.cpp
	Author: Henrique Fidelis
	Date: 13/05/22 08:40
	Description: Programa para manipular vetores (array)
*/

# include <conio.h>
# include <stdio.h>

main()
{
	int vet[5];
	int i;
	
	i = 0;
	//fazer a carga do vetor
	puts("Digite 5 numeros inteiros: ");
	while(i <= 4)
	{
		scanf("%d", &vet[i]);
		i = i + 1;
	}
	puts("Vetor carregado!");
	
	puts("Vetor na ordem inversa");
	for(i = 4; i >= 0; i--)
		printf("%d|", vet[i]);
		
	puts("\nVetor na ordem original");
	i = 0;
	do
	{
		printf("%d|", vet[i]);
		i = i + 1;
	}while(i < 5);
	
	puts("\nMedia aritmetica");
	int soma = 0;
	float media = 0.0;
	
	i = 0;
	while(i <= 4)
	{
		soma = soma + vet[i];
		i++;
	}
	
	media = (float) soma / 5; //fazer o casting
	printf("media = %.2f", media);
	
}//fim do programa
