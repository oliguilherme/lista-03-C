#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
8) Faça um programa que calcule o valor de A, dado por:
A = 1 + 2 + 3 + 4 + ... + n, onde n é um número inteiro, maior que zero informado pelo usuário.
*/

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int a, n;
	
	do{
		printf("Insira um número inteiro maior que zero: ");
		scanf("%d", &n);
	} while(n <= 0);
	
	for (int cont = 1; cont <= n; cont++)
		a += cont;
	
	printf("O valor de A é: %d\n\n", a);
	
	system("Pause");
	return 0;
}
