#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float nota1, nota2, media;
	
	do{
		printf("Insira duas notas v�lidas: ");
		scanf("%f%f", &nota1, &nota2);
	} while(nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10);
	
	media = (nota1 + nota2) / 2;
	
	printf("\nM�dia: %.2f\n\n", media);
	
	system("pause");
	return 0;
}
