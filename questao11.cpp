#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
12) Para uma turma de 45 alunos, construa um algoritmo que determine:
a) A idade média dos alunos com menos de 1,70m de altura;
b) A altura média dos alunos com mais de 20 anos.
*/

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int idade, cont1, cont2;
	float altura, altura_media, idade_media, auxiliar_idade = 0, auxiliar_altura = 0;
	
	for (int i = 1; i <= 45; i++){
		printf("Insira sua idade: ");
		scanf("%d", &idade);
		printf("Insura sua altura em metros: ");
		scanf("%f", &altura);
		
		if (altura < 1.7){
			auxiliar_idade += idade;
			cont1++;
		}
		if (idade > 20){
			auxiliar_altura += altura;
			cont2++;
		}
	}
	
	idade_media = auxiliar_idade / cont1;
	altura_media = auxiliar_altura / cont2;
	
	printf("a) A idade média dos alunos com menos de 1,70m de altura é: %.2f\n", idade_media);
	printf("b) A altura média dos alunos com mais de 20 anos é: %.2f\n\n", altura_media);
	
	system("Pause");
	return 0;
}
