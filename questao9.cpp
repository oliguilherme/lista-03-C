#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
9) Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para tal, decidiu guardar 1
centavo no primeiro dia, 2 centavos no segundo dia, 4 centavos no terceiro dia, 8 centavos no quarto
dia, e assim por diante. Faça um programa para calcular quanto você terá ao final dos 30 dias.
*/

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int anterior = 1, final = 1, dia;
	
	for (dia = 2; dia <= 30; dia++){
		anterior = anterior * 2;
		final = anterior + final;
	}
	printf("Valor em centavos: %d\n", final);
	printf("Valor em R$: %.2f\n\n", final / 100.0);
	
	system("Pause");
	return 0;
}
