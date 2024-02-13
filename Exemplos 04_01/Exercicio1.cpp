/*
	Name:  MediasDadoPessoais.cpp
	Author: Luana Camargo, Henrique Fidelis
	Date: 01/04/22 09:41
	Description: Programa para realizar os c�lculos de m�dias de
				 idade, altura e peso para "n" pessoas.
*/

# include <stdio.h>
# include <locale.h>

main()
{
	//declara��o de vari�veis
	setlocale (LC_ALL, "Portuguese");
	int idade, contP, h, m, idaH, idaM;
	float peso, alt, pesoH, pesoM, altH, altM;
	float idaMedH, idaMedM, altMedH, altMedM, pesoMedH, pesoMedM; //armazena a media
	char sexo;
	
	//inicializa��o das variaveis
	idade = contP = h = m = idaH = idaM = 0;
	peso = alt = pesoH = pesoM = altH = altM = 0.0;
	sexo = ' ';
	idaMedH = idaMedM = altMedH = altMedM = pesoMedH = pesoMedM = 0.0;
	
	//la�o de repeti��o
	while(1)
	{
		printf ("Digite sua idade: ");
		scanf ("%d", &idade);
		
		if(idade == 0)
			break;
			
		printf("Altura: ");
		scanf("%f", &alt);
		printf("Peso: ");
		scanf("%f", &peso);
		printf("Sexo: ");
		scanf(" %c", &sexo);// colocar espa�o antes da "%" para n�o dar erro no sexo
		
		if(sexo == 'M'|| sexo == 'm')
		{
			idaH = idaH + idade;
			altH = altH + alt;
			pesoH = pesoH + peso;
			h = h + 1;
		}//fim do comando "if"
		else if (sexo == 'F' || sexo == 'f')
		{
			idaM = idaM + idade;
			altM = altM + alt;
			pesoM = pesoM + peso;
			m++; 
		}//fim do comando "else if"
		else
			puts("Sexo Inv�lido!!!");
	}//fim do while
	
	//Calculando as m�dias
	if(h != 0)
	{
		idaMedH = idaH / h;
		altMedH = altH / h;
		pesoMedH = pesoH / h;
	}
	
	if (m != 0)
	{
		idaMedM = idaM / m;
		altMedM = altM / m;
		pesoMedM = pesoM / m;
	}
	
	//Mostrando os resultados
	puts("\n=== HOMENS ===");
	printf("\nQuantidade: %d", h);
	printf("\nIdade m�dia: %.2f", idaMedH);
	printf("\nAltura m�dia: %.2f", altMedH);
	printf("\nPeso m�dio: %.2f", pesoMedH);
	
	puts("\n=== MULHERES ===");
	printf("\n\nQuantidade: %d", m);
	printf("\nIdade m�dia: %.2f", idaMedM);
	printf("\nAltura m�dia: %.2f", altMedM);
	printf("\nPeso m�dio: %.2f", pesoMedM);

	puts(" \n\n Fim do Programa !!!!! ");
	
}//fim do main
