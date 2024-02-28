/*
	Name: MaisVelhoMaisNovo.cpp
	Author: Luana Camargo
	Date: 01/04/22 09:16
	Description: Programa para identificar a idade do mais novo
				e do mais velho
	
*/



# include <stdio.h>
main()
{
	int idade, velho, novo, i;
	idade = velho = novo = i = 0;
	
	printf ("Digite sua idade: ");
	scanf ("%d", &idade);
	velho = idade;
	novo = idade;
	
	for(i = 0; i < 9; i++)
	{
		printf ("Digite sua idade: ");
		scanf ("%d", &idade);
		if(idade > velho)
			velho = idade;
		if(idade < novo)
			novo = idade;
	}
	
	printf ("O mais novo eh: %d\n", novo);
	printf ("A idade do mais velho eh: %d", velho);
	
}// fim do programa

