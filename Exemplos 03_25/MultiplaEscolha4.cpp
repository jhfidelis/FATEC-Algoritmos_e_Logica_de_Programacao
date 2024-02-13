/*
	Vamos trabalhar hoje comuma estrutura de m�ltipla escolha:
		switch...case
	Voc� coloca uma variavel do tipo "inteiro" em evid�ncia e analisa as sa�das.
	
	Exemplo:
	
		switch(op��o)
		{
			case 1:
			
			case 2:
			
			case 3:
		}
		� uma estrutura muito utilizada para menus.
		caso NENHUMA das op��es tenha sido satisfeita, a estrutura sai por "default"
*/
/*
	Name: MultiplaEscolha4.cpp
	Author: Henrique Fidelis
	Date: 25/03/22 08:42
	Description: Programa para demonstrar a utiliza��o da estrutura de m�ltipla escolha
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
		puts("Menu de op��es");
		puts("============");
		puts("1 - Adicionar\n2 - Multiplicar\n3 - Dividir");
		puts("============");
		printf("Escolha sua Op��o: ");
		scanf("%d", &opc);

	switch(opc)
	{
		case 1: puts("Voc� escolheu a op��o para adicionar.");
				printf("Digite o primeiro n�mero: ");
				scanf("%d", &num1);
				printf("Digite o segundo n�mero: ");
				scanf("%d", &num2);
				result = num1 + num2;
				printf("A soma �: %d", result);
				break;
		
		case 2: puts("Multiplica��o!!!");
				printf("Digite o primeiro n�mero: ");
				scanf("%d", &num1);
				printf("Digite o segundo n�mero: ");
				scanf("%d", &num2);
				result = num1 * num2;
				printf("A soma �: %d", result);
				break;
		
		case 3: puts("Vamos dividir os n�meros...");
				
				printf("Digite o primeiro n�mero: ");
				scanf("%d", &num1);
				printf("Digite o segundo n�mero: ");
				scanf("%d", &num2);
				quoc = (float) num1 / num2;
				printf("A soma �: %f", quoc);
				break;
		
		case 9: puts("O programa ser� finalizado em 3 segundos...");
				Sleep(3000);
				puts("Programa finalizado com sucesso!");
				exit(0);
		
		default: puts("Op��o INV�LIDA!!!");
				 break;
		
	}//fim do switch
	
	puts("\n\n=====> Pressione <<ENTER>> <=====");
	getch();//para a execu��o aguardando o pressionar de uma tecla
	
	//tempo em milisegundos
	Sleep(1500);//coloca o programa em suspens�o por 2 segundos
  }//fim do while
}//fim do main
