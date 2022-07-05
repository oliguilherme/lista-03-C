#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
7) Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar
um menu ao usu�rio da seguinte forma:
1 � Somar
2 � Subtrair
3 � Multiplicar
4 � Dividir
0 � Sair

Uma estrutura do tipo switch deve ser utilizada para realizar cada opera��o em um case. Ap�s a
escolha da opera��o, dois valores devem ser pedidos ao usu�rio para realizar a opera��o escolhida.
Se a opera��o escolhida for a 4 o dividendo n�o pode ser zero, um novo valor deve ser solicitado. O
programa deve funcionar at� que o usu�rio escolha a op��o 0 (op��o de sa�da).
*/

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int opcao;
	float num1, num2;
	
	do{
		printf("1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n0 - Sair\n\n");
		printf("Qual opera��o deseja realiza? ");
		scanf("%d", &opcao);
	
	if (opcao > 0 && opcao < 5){
		printf("\nInsira dois n�meros: ");
		scanf("%f%f", &num1, &num2);
	}
	
	switch(opcao){
		case 0:
			printf("\nSaindo...\n\n");
			break;
		case 1:
			printf("\nSoma = %.1f\n\n", num1 + num2);
			break;
		case 2:
			printf("\nSubtra��o = %.1f\n\n", num1 - num2);
			break;
		case 3:
			printf("\nMultiplica��o = %.1f\n\n", num1 * num2);
			break;
		case 4:
			while (num2 == 0.0){
				printf("\nO dividendo n�o pode ser zero!\nInsira outro dividendo: ");
				scanf("%f", &num2);
			}
			printf("\nDivis�o = %.2f\n\n", num1 / num2);
			break;
		default:
			printf("\nOpc��o inv�lida.\nInsira outra op��o: ");
			scanf("%d", &opcao);
	}
		
	} while(opcao != 0); 
	
	system("Pause");
	return 0;
}
