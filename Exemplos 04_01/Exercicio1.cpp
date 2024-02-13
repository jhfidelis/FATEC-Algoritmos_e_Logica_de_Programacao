/*
	Name:  MediasDadoPessoais.cpp
	Author: Luana Camargo, Henrique Fidelis
	Date: 01/04/22 09:41
	Description: Programa para realizar os cálculos de médias de
				 idade, altura e peso para "n" pessoas.
*/

# include <stdio.h>
# include <locale.h>

main()
{
	//declaração de variáveis
	setlocale (LC_ALL, "Portuguese");
	int idade, contP, h, m, idaH, idaM;
	float peso, alt, pesoH, pesoM, altH, altM;
	float idaMedH, idaMedM, altMedH, altMedM, pesoMedH, pesoMedM; //armazena a media
	char sexo;
	
	//inicialização das variaveis
	idade = contP = h = m = idaH = idaM = 0;
	peso = alt = pesoH = pesoM = altH = altM = 0.0;
	sexo = ' ';
	idaMedH = idaMedM = altMedH = altMedM = pesoMedH = pesoMedM = 0.0;
	
	//laço de repetição
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
		scanf(" %c", &sexo);// colocar espaço antes da "%" para não dar erro no sexo
		
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
			puts("Sexo Inválido!!!");
	}//fim do while
	
	//Calculando as médias
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
	printf("\nIdade média: %.2f", idaMedH);
	printf("\nAltura média: %.2f", altMedH);
	printf("\nPeso médio: %.2f", pesoMedH);
	
	puts("\n=== MULHERES ===");
	printf("\n\nQuantidade: %d", m);
	printf("\nIdade média: %.2f", idaMedM);
	printf("\nAltura média: %.2f", altMedM);
	printf("\nPeso médio: %.2f", pesoMedM);

	puts(" \n\n Fim do Programa !!!!! ");
	
}//fim do main
