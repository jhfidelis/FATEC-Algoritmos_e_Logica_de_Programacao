/*
Exerc�cio 2:
Criar uma calculadora para realizar as seguintes opera��es matem�ticas com as op��es escolhidas a partir de um menu:

	-Adi��o
	-Multiplica��o
	-Divis�o
	-Subtra��o
	-Potencia��o
	-Raiz quadrada
*/

/*
	Name: Calculadora.cpp
	Author: Henrique Fidelis
	Date: 25/03/22 10:44
	Description: Programa para realizar opera��es matem�ticas
*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <windows.h>
# include <math.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int opc, exp = 0;
	float n1, n2, resultado;
	n1 = n2 = resultado = 0.0;
		
	while(1)
	{
		int cont = 0;
		fflush(stdin);//limpa o buffer do teclado
		opc=0;
		system("cls");//clear scream
		puts("Escolha a opera��o a ser realizada:");
		puts("1 - Adi��o\n2 - Multiplica��o\n3 - Divis�o\n4 - Subtra��o\n5 - Potencia��o\n6 - Raiz quadrada\n");
		scanf("%d", &opc);
		
		puts("");
		switch(opc)
		{
			case 1: printf("Digite o primeiro n�mero: "); 
					scanf("%f", &n1);
					printf("Digite o segundo n�mero: ");
					scanf("%f", &n2);
					resultado = n1 + n2;
					printf("O resultado �: %f" , resultado);
					break;
			
			case 2: printf("Digite o primeiro n�mero: "); 
					scanf("%f", &n1);
					printf("Digite o segundo n�mero: ");
					scanf("%f", &n2);
					resultado = n1 * n2;
					printf("O resultado �: %f" , resultado);
					break;
				
			case 3: printf("Digite o primeiro n�mero: "); 
					scanf("%f", &n1);
					printf("Digite o segundo n�mero: ");
					scanf("%f", &n2);
					resultado = n1 / n2;
					printf("O resultado �: %f" , resultado);
					break;
				
			case 4: printf("Digite o primeiro n�mero: "); 
					scanf("%f", &n1);
					printf("Digite o segundo n�mero: ");
					scanf("%f", &n2);
					resultado = n1 - n2;
					printf("O resultado �: %f" , resultado);
					break;
				
			case 5: printf("Digite a base da opera��o: ");
					scanf("%f", &n1);
					printf("Digite o expoente: ");
					scanf("%d", &exp);
					resultado = 1;
					for(int i = 0; i < exp; i ++) {
						resultado = resultado * n1;
					}
					printf("O resultado �: %f" , resultado);
					break;
			
			case 6: printf("Digite um n�mero para calcular a raiz quadrada: ");
					scanf("%f", &n1);
					resultado = sqrt(n1);
					printf("A raiz quadrada desse n�mero �: %f", resultado);
					break;
			
			default: puts("Opera��o Inv�lida!");
					 break;
		}//fim da switch
		Sleep(5000);
		
	}//fim do while
	
}//fim do main
