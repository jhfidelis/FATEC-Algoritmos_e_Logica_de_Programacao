/*
Exercício 2:
Criar uma calculadora para realizar as seguintes operações matemáticas com as opções escolhidas a partir de um menu:

	-Adição
	-Multiplicação
	-Divisão
	-Subtração
	-Potenciação
	-Raiz quadrada
*/

/*
	Name: Calculadora.cpp
	Author: Henrique Fidelis
	Date: 25/03/22 10:44
	Description: Programa para realizar operações matemáticas
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
		puts("Escolha a operação a ser realizada:");
		puts("1 - Adição\n2 - Multiplicação\n3 - Divisão\n4 - Subtração\n5 - Potenciação\n6 - Raiz quadrada\n");
		scanf("%d", &opc);
		
		puts("");
		switch(opc)
		{
			case 1: printf("Digite o primeiro número: "); 
					scanf("%f", &n1);
					printf("Digite o segundo número: ");
					scanf("%f", &n2);
					resultado = n1 + n2;
					printf("O resultado é: %f" , resultado);
					break;
			
			case 2: printf("Digite o primeiro número: "); 
					scanf("%f", &n1);
					printf("Digite o segundo número: ");
					scanf("%f", &n2);
					resultado = n1 * n2;
					printf("O resultado é: %f" , resultado);
					break;
				
			case 3: printf("Digite o primeiro número: "); 
					scanf("%f", &n1);
					printf("Digite o segundo número: ");
					scanf("%f", &n2);
					resultado = n1 / n2;
					printf("O resultado é: %f" , resultado);
					break;
				
			case 4: printf("Digite o primeiro número: "); 
					scanf("%f", &n1);
					printf("Digite o segundo número: ");
					scanf("%f", &n2);
					resultado = n1 - n2;
					printf("O resultado é: %f" , resultado);
					break;
				
			case 5: printf("Digite a base da operação: ");
					scanf("%f", &n1);
					printf("Digite o expoente: ");
					scanf("%d", &exp);
					resultado = 1;
					for(int i = 0; i < exp; i ++) {
						resultado = resultado * n1;
					}
					printf("O resultado é: %f" , resultado);
					break;
			
			case 6: printf("Digite um número para calcular a raiz quadrada: ");
					scanf("%f", &n1);
					resultado = sqrt(n1);
					printf("A raiz quadrada desse número é: %f", resultado);
					break;
			
			default: puts("Operação Inválida!");
					 break;
		}//fim da switch
		Sleep(5000);
		
	}//fim do while
	
}//fim do main
