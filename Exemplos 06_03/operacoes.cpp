/*
	Name: operacoes.cpp
	Author: Henrique Fidelis
	Date: 03/06/22 08:36
	Description: Fazer opera��es com matrizes
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int matriz[3][3];
	int i, j; // I = linha / J = coluna
	int mult, soma;
	
	mult = 1;
	soma = 0;
	
	printf("Digite valor para os elementos da matriz\n");
	
	for(i=0; i<3; i++)
  		for(j=0; j<3; j++)
  		{
     		printf("�ndice %d, %d: ", i, j);
			scanf("%d", &matriz[i][j]);
  		}

	puts("\nSaida dos elementos da matriz");
	for (i=0; i<3; i++){
  		for (j=0; j<3; j++)
 		 {
			 printf("| %d |", matriz[i][j]);
 		 }	 
  		puts("\n");
	}
//SOMA DA 1� LINHA
	for (i=0; i<3; i++){
  		for (j=0; j<3; j++){
  			if(i == 0){
  				soma += matriz[i][j];
			  }
		  }
	}
	printf("Soma da 1� linha da matriz: %d", soma);
//SOMA DA 2� COLUNA
	soma = 0;
	for (i=0; i<3; i++){
  		for (j=0; j<3; j++){
  			if(j == 1){
  				soma += matriz[i][j];
			  }
		  }
	}
	printf("\nSoma da 2� coluna da matriz: %d", soma);
//MULTIPLICA��O DA DIAGONAL
	for (i=0; i<3; i++){
  		for (j=0; j<3; j++)
 		 {
			if(i == j)
			{
				mult *= matriz[i][j];
			}
 		 }	 
	}
	printf("\nMultiplica��o da diagonal da matriz: %d", mult);
	
//MULTIPLICA��O DA DIAGONAL INVERSA
	mult = 1;
	mult = matriz[0][2] * matriz[1][1] * matriz[2][0];
	printf("\nMultiplica��o da diagonal inversa da matriz: %d", mult);
	
//FAZER PESQUISA DE UM ELEMENTO
	int pesq;
	
	printf("\nDigite um n�mero para ser pesquisado: ");
	scanf("%d", & pesq);
	int busca = 0;
	
	for (i=0; i<3; i++){
  		for (j=0; j<3; j++){
  			if(pesq == matriz[i][j]){
  				printf("O n�mero pesquisado est� na posi��o [%d], [%d]", i, j);
  				busca = 1;
			  }
		  }
	}
	if(busca == 0) {
		printf("N�mero n�o encontrado!");
	}
	
}//fim do programa
