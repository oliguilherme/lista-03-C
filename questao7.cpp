#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
7) Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar
um menu ao usuário da seguinte forma:
1 – Somar
2 – Subtrair
3 – Multiplicar
4 – Dividir
0 – Sair

Uma estrutura do tipo switch deve ser utilizada para realizar cada operação em um case. Após a
escolha da operação, dois valores devem ser pedidos ao usuário para realizar a operação escolhida.
Se a operação escolhida for a 4 o dividendo não pode ser zero, um novo valor deve ser solicitado. O
programa deve funcionar até que o usuário escolha a opção 0 (opção de saída).
*/

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int opcao;
	float num1, num2;
	
	do{
		printf("1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n0 - Sair\n\n");
		printf("Qual operação deseja realiza? ");
		scanf("%d", &opcao);
	
	if (opcao > 0 && opcao < 5){
		printf("\nInsira dois números: ");
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
			printf("\nSubtração = %.1f\n\n", num1 - num2);
			break;
		case 3:
			printf("\nMultiplicação = %.1f\n\n", num1 * num2);
			break;
		case 4:
			while (num2 == 0.0){
				printf("\nO dividendo não pode ser zero!\nInsira outro dividendo: ");
				scanf("%f", &num2);
			}
			printf("\nDivisão = %.2f\n\n", num1 / num2);
			break;
		default:
			printf("\nOpcção inválida.\nInsira outra opção: ");
			scanf("%d", &opcao);
	}
		
	} while(opcao != 0); 
	
	system("Pause");
	return 0;
}
