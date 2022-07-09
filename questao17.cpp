#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
17) Foi feita uma pesquisa entre os habitantes de uma região e foram coletados os dados de idade,
sexo (M/F) e salário de X pessoas (x deve ser informado pelo usuário). Faça um algoritmo que
informe:
a) a média de salário do grupo;
b) a maior e a menor idade do grupo;
c) a quantidade de mulheres com salário até R$2000,00.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade, qnt, maior_idade, menor_idade, contf = 0;
	char sexo;
	float salario, soma = 0.0, media_salario;
	
	printf("Quantidade de pessoas: ");
	scanf("%d", &qnt);
	
	for (int i = 1; i <= qnt; i++){
		printf("Salário %d: R$", i);
		scanf("%f", &salario);
		soma += salario;
		printf("%da idade: ", i);
		scanf("%d", &idade);
		printf("Informe o sexo (M/F): ");
		fflush(stdin);
		scanf("%c", &sexo);
		
		if (i == 1){
			maior_idade = idade;
			menor_idade = idade;
		}
		else{
			if (idade > maior_idade)
				maior_idade = idade;
			
			if (idade < menor_idade)
				menor_idade = idade;
		}
		
		if (sexo == 'F' or sexo == 'f' and salario <= 2000.0)
			contf += 1;
	}
	
	media_salario = soma / qnt;
	
	printf("\n\na) A média de salário do grupo é de R$%.2f\n", media_salario);	
	printf("b) A pessoa com maior idade tem %d anos e a pessoa com menor idade tem %d anos.\n", maior_idade, menor_idade);	
	printf("c) Ao todo são %d mulheres com o salário de até R$ 2000,00\n\n", contf);
	
	system("Pause");
	return 0;
}
