#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
13) Fa�a um programa que calcule a m�dia de sal�rios de uma empresa, pedindo ao usu�rio a
quantidade de funcion�rios e o sal�rio de cada funcion�rio. Ao final, o programa deve imprimir a
m�dia dos sal�rios informados, o sal�rio mais alto e o sal�rio mais baixo.
*/

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int qnt_funcionario, cont = 1;
	float sal_funcionario, maior, menor, media, soma = 0;
	
	printf("Quantidade de funcion�rios: ");
	scanf("%d", &qnt_funcionario);
	
	do{
		printf("Sal�rio do funcion�rio %d: R$", cont);
		scanf("%f", &sal_funcionario);
		soma += sal_funcionario;
		
		if (cont == 1){
			maior = sal_funcionario;
			menor = sal_funcionario;
		}
		else
			if (sal_funcionario > maior)
				maior = sal_funcionario;
				
			if (sal_funcionario < menor)
				menor = sal_funcionario;	
		
		cont++;
	} while (cont <= qnt_funcionario);
	
	printf("A m�dia dos sal�rios informados �: R$%.2f\n", media = soma / qnt_funcionario);
	printf("Maior sal�rio: R$%.2f\n\n", maior);
	printf("Menor sal�rio: R$%.2f\n\n", menor);
	
	system("Pause");
	return 0;
}
