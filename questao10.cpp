#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
10) Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a
massa inicial, em gramas, faça um programa que determine o tempo necessário para que essa massa
se torne menor que 0,05 gramas.
*/

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float massa, resto;
	int tempo = 0, min, sec;
	
	printf("Informe a massa em gramas: ");
	scanf("%f", &massa);
	
	while (massa >= 0.05){
		massa = massa / 2.0;
		tempo = tempo + 50;
	}
	
	printf("Tempo em segundos: %d\n\n", tempo);
	
	min = tempo / 60;
	sec = tempo % 60;
	
	printf("Tempo em minutos: %dmin:%dseg\n\n", min, sec);
	
	system("Pause");
	return 0;
}
