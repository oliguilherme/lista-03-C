#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
13) Faça um programa que calcule a média de salários de uma empresa, pedindo ao usuário a
quantidade de funcionários e o salário de cada funcionário. Ao final, o programa deve imprimir a
média dos salários informados, o salário mais alto e o salário mais baixo.
*/

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int qnt_funcionario, cont = 1;
	float sal_funcionario, maior, menor, media, soma = 0;
	
	printf("Quantidade de funcionários: ");
	scanf("%d", &qnt_funcionario);
	
	do{
		printf("Salário do funcionário %d: R$", cont);
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
	
	printf("A média dos salários informados é: R$%.2f\n", media = soma / qnt_funcionario);
	printf("Maior salário: R$%.2f\n\n", maior);
	printf("Menor salário: R$%.2f\n\n", menor);
	
	system("Pause");
	return 0;
}
