/*
	Name: Votacao(array).cpp
	Author: Henrique Fidelis
	Date: 27/05/22 08:07
	Description: Programa para desenvolver um sistema eleitoral
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int c1, c2, c3, br, nulo;
	int eleitores, voto;
	c1 = c2 = c3 = br = nulo = 0;
	eleitores = voto = 0;
	
	int vet[eleitores];
	int i = 0;
	
	printf("Digite a quantidade de eleitores: ");
	scanf("%d", & eleitores);
	
	for(i = 0; i < eleitores; i++)
	{
		system("cls");
		puts("=== SISTEMA ELEITORAL ===");
		puts("1 - Candidato 1\n2 - Candidato 2\n3 - Candidato 3");
		puts("4 - Voto Branco\n5 - Voto Nulo");
		printf("Escolha seu candidato: ");
		scanf("%d", &vet[i]);
		if(vet[i] == 1){
			c1++;
		}
			else if(vet[i] == 2){
				c2++;
			}
				else if(vet[i] == 3){
					c3++;
				}
					else if(vet[i] == 4){
						br++;
					}
						else if(vet[i] == 5){
							nulo++;
						}
							else if(vet[i] == 0){
								puts("Eleição Encerrada!!!");
								break;
							}
								else{
									puts("Voto Inválido!!!");
								}
		Sleep(500);
	}//fim do 'for'
	
	if (c1 > c2 and c1 > c3)
		printf("Candidato 1 está eleito com %d votos!!!", c1);
		else if (c2 > c1 and c2 > c3)
				printf("Candidato 2 está eleito com %d votos!!!", c2);
				else if(c3 > c1 and c3 > c2)
						printf("Candidato 3 está eleito com %d votos!!!", c3);
}//fim do programa
