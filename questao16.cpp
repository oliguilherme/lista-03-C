#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
17) Fa�a um programa que pe�a n�meros ao usu�rio. Quando o usu�rio digitar o n�mero 0 (zero) o
programa deve imprimir na tela quantos n�meros positivos e negativos foram digitados.
*/

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int num, cont_mais = 0, cont_menos;
	
	do{
		printf("Insira um n�mero inteiro (digite 0 para finalizar): ");
		scanf("%d", &num);
		
		if (num > 0)
			cont_mais++;
		if (num <= -1)
			cont_menos++;
		
	} while (num != 0);
	
	printf("Ao todo foram digitados %d n�meros positivos e %d n�meros negativos.\n\n", cont_mais, cont_menos);
	
	system("Pause");
	return 0;
}
