#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
12) Fa�a um programa que pe�a ao usu�rio um n�mero inteiro maior que 2 e diga se o n�mero
informado � primo ou n�o.
*/

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int input;
	
	do{
		printf("Insira um n�mero inteiro maior que 2: ");
		scanf("%d", &input);
	} while(input <= 2);
	
	if (input % 2 != 0)
		printf("O n�mero %d � primo", input);
	else
		printf("O n�mero %d n�o � primo.", input);
		
	system("Pause");
	return 0;
}
