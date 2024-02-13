/*
	Name: Prova_Q3.cpp
	Author: Henrique Fidelis
	Date: 29/04/22 10:20
	Description: Resulução da 3ª questão da P1. Calcular média de 40 alunos para 10 turmas
*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float nota, mediaTurma, mediaGeral;
	float somaNota, somaMedias;
	int cont, contGeral;
	
	mediaGeral = 0.0;
	somaMedias = 0.0;
	contGeral = 0;
	
while (contGeral < 4)
{
	
	nota = mediaTurma = 0.0;
	somaNota = 0.0;
	
	cont = 0;
	do
	{
		printf("Digite a nota do %dº aluno da %dª turma: ", cont+1, contGeral+1);
		scanf("%f", &nota);
		somaNota = somaNota + nota;
		cont++;
	}while(cont<4);
	mediaTurma = somaNota / cont;
	printf("\nA media da %dª turma foi: %.2f\n", contGeral+1, mediaTurma);

	somaMedias = somaMedias + mediaTurma;
contGeral++;

mediaGeral = somaMedias / contGeral;
printf("A media geral de todas as turmas foi: %.2f\n\n",mediaGeral);
}
}//fim do programa
