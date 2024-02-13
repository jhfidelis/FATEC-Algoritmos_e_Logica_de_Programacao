/*
	Vamos trabalhar hoje comuma estrutura de múltipla escolha:
		switch...case
	Você coloca uma variavel do tipo "inteiro" em evidência e analisa as saídas.
	
	Exemplo:
	
		switch(opção)
		{
			case 1:
			
			case 2:
			
			case 3:
		}
		é uma estrutura muito utilizada para menus.
		caso NENHUMA das opções tenha sido satisfeita, a estrutura sai por "default"
*/
/*
	Name: MultiplaEscolha4.cpp
	Author: Henrique Fidelis
	Date: 25/03/22 08:42
	Description: Programa para demonstrar a utilização da estrutura de múltipla escolha
*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <windows.h>


main()
{
	setlocale(LC_ALL, "Portuguese");
	int opc, num1, num2, result;
	opc = num1 = num2 = result = 0;
	float quoc = 0.0;
	
	while(1)
	{
		fflush(stdin);//limpa o buffer do teclado
		opc=0;
		system("cls");//clear scream
		puts("Menu de opções");
		puts("============");
		puts("1 - Adicionar\n2 - Multiplicar\n3 - Dividir");
		puts("============");
		printf("Escolha sua Opção: ");
		scanf("%d", &opc);

	switch(opc)
	{
		case 1: puts("Você escolheu a opção para adicionar.");
				printf("Digite o primeiro número: ");
				scanf("%d", &num1);
				printf("Digite o segundo número: ");
				scanf("%d", &num2);
				result = num1 + num2;
				printf("A soma é: %d", result);
				break;
		
		case 2: puts("Multiplicação!!!");
				printf("Digite o primeiro número: ");
				scanf("%d", &num1);
				printf("Digite o segundo número: ");
				scanf("%d", &num2);
				result = num1 * num2;
				printf("A soma é: %d", result);
				break;
		
		case 3: puts("Vamos dividir os números...");
				
				printf("Digite o primeiro número: ");
				scanf("%d", &num1);
				printf("Digite o segundo número: ");
				scanf("%d", &num2);
				quoc = (float) num1 / num2;
				printf("A soma é: %f", quoc);
				break;
		
		case 9: puts("O programa será finalizado em 3 segundos...");
				Sleep(3000);
				puts("Programa finalizado com sucesso!");
				exit(0);
		
		default: puts("Opção INVÁLIDA!!!");
				 break;
		
	}//fim do switch
	
	puts("\n\n=====> Pressione <<ENTER>> <=====");
	getch();//para a execução aguardando o pressionar de uma tecla
	
	//tempo em milisegundos
	Sleep(1500);//coloca o programa em suspensão por 2 segundos
  }//fim do while
}//fim do main
