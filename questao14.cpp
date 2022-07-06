#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
14) Faça um programa que peça ao usuário dois números inteiros e apresente o resultado na
multiplicação entre os dois números sem utilizar a operação de multiplicação.
*/

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int num1, num2, cont = 1, soma  = 0;
	
	printf("Insira dois números: ");
	scanf("%d%d", &num1, &num2);
	
	while(cont <= num2){
		soma += num1;
		cont++;
	}
	
	printf("O resultado da multiplicação é: %d\n\n", soma);
	
	
	system("Pause");
	return 0;
}
