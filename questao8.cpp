#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
8) Fa�a um programa que calcule o valor de A, dado por:
A = 1 + 2 + 3 + 4 + ... + n, onde n � um n�mero inteiro, maior que zero informado pelo usu�rio.
*/

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int a, n;
	
	do{
		printf("Insira um n�mero inteiro maior que zero: ");
		scanf("%d", &n);
	} while(n <= 0);
	
	for (int cont = 1; cont <= n; cont++)
		a += cont;
	
	printf("O valor de A �: %d\n\n", a);
	
	system("Pause");
	return 0;
}
