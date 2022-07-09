#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
17) Foi feita uma pesquisa entre os habitantes de uma regi�o e foram coletados os dados de idade,
sexo (M/F) e sal�rio de X pessoas (x deve ser informado pelo usu�rio). Fa�a um algoritmo que
informe:
a) a m�dia de sal�rio do grupo;
b) a maior e a menor idade do grupo;
c) a quantidade de mulheres com sal�rio at� R$2000,00.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade, qnt, maior_idade, menor_idade, contf = 0;
	char sexo;
	float salario, soma = 0.0, media_salario;
	
	printf("Quantidade de pessoas: ");
	scanf("%d", &qnt);
	
	for (int i = 1; i <= qnt; i++){
		printf("Sal�rio %d: R$", i);
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
	
	printf("\n\na) A m�dia de sal�rio do grupo � de R$%.2f\n", media_salario);	
	printf("b) A pessoa com maior idade tem %d anos e a pessoa com menor idade tem %d anos.\n", maior_idade, menor_idade);	
	printf("c) Ao todo s�o %d mulheres com o sal�rio de at� R$ 2000,00\n\n", contf);
	
	system("Pause");
	return 0;
}
