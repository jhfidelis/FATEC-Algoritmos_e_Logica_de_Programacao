/*
	Name: operacoes.cpp
	Author: Henrique Fidelis
	Date: 10/06/22 08:36
	Description: Fazer operações com matrizes
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int matriz[3][3];
	int lin, col, a, b, c;
	int exercA, exercB;
	
	lin = col = 0;
	
	for(lin=0; lin<3; lin++)
		for(col=0; col<3; col++){
			printf("Índice %d, %d: ", lin, col);
			scanf("%d", &matriz[lin][col]);
		}
//mostrar os números da matriz
	puts("");
	for (lin=0; lin<3; lin++){
		for (col=0; col<3; col++){
			printf("| %d |", matriz[lin][col]);
	}
	puts("\n");
	}
//soma de cada linha
	puts("Linha A:");
	for (col=0; col<3; col++){
		printf("| %d |", matriz[0][col]);
	}
	a = (matriz[0][0] + matriz[0][1] + matriz[0][2]);
	printf("\nSoma de A: %d\n", a);
	
	puts("\nLinha B:");
	for (col=0; col<3; col++){
		printf("| %d |", matriz[1][col]);
	}
	b = (matriz[1][0] + matriz[1][1] + matriz[1][2]);
	printf("\nSoma de B: %d\n", b);
	
	puts("\nLinha C:");
	for (col=0; col<3; col++){
		printf("| %d |", matriz[2][col]);
	}
	c = (matriz[2][0] + matriz[2][1] + matriz[2][2]);
	printf("\nSoma de C: %d\n", c);

//resolução da questão a) A + B – C
	exercA = a + b - c;
	printf("\nA + B - C = %d", exercA);

//resolução da questão b) A – B – C
	exercB = a - b - c;
	printf("\nA - B - C = %d", exercB);
}//fim do programa
