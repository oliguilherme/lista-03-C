#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
16) Fa�a um programa para encontrar o menor n�mero inteiro que seja divis�vel por todos os
n�meros inteiros entre 1 e 10.
*/

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int menor = 8, divisores = 0;
	
	do{	
		menor += 2;
		divisores = 0;
		for (int i = 1; i <=10; i++)
			if (menor % i == 0)
				divisores++;
		
	} while (divisores != 10);
	
	printf("O menor valor �: %d\n\n", menor);
	
	
	
	
	system("Pause");
	return 0;
}
