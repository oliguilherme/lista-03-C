#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
14) Fa�a um programa que pe�a ao usu�rio dois n�meros inteiros e apresente o resultado na
multiplica��o entre os dois n�meros sem utilizar a opera��o de multiplica��o.
*/

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int num1, num2, cont = 1, soma  = 0;
	
	printf("Insira dois n�meros: ");
	scanf("%d%d", &num1, &num2);
	
	while(cont <= num2){
		soma += num1;
		cont++;
	}
	
	printf("O resultado da multiplica��o �: %d\n\n", soma);
	
	
	system("Pause");
	return 0;
}
