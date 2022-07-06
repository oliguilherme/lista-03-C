#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
17) Faça um programa que peça números ao usuário. Quando o usuário digitar o número 0 (zero) o
programa deve imprimir na tela quantos números positivos e negativos foram digitados.
*/

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int num, cont_mais = 0, cont_menos;
	
	do{
		printf("Insira um número inteiro (digite 0 para finalizar): ");
		scanf("%d", &num);
		
		if (num > 0)
			cont_mais++;
		if (num <= -1)
			cont_menos++;
		
	} while (num != 0);
	
	printf("Ao todo foram digitados %d números positivos e %d números negativos.\n\n", cont_mais, cont_menos);
	
	system("Pause");
	return 0;
}
