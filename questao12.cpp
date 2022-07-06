#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
12) Faça um programa que peça ao usuário um número inteiro maior que 2 e diga se o número
informado é primo ou não.
*/

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int input;
	
	do{
		printf("Insira um número inteiro maior que 2: ");
		scanf("%d", &input);
	} while(input <= 2);
	
	if (input % 2 != 0)
		printf("O número %d é primo", input);
	else
		printf("O número %d não é primo.", input);
		
	system("Pause");
	return 0;
}
