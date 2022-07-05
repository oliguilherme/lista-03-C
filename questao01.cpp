#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int cont, num;
	char opcao;
	
	do{
		do{
			printf("Insira um número entre 1 e 10 para calcular a sua tabuada: ");
			scanf("%d", &num);
			fflush(stdin);
		
		}while(num < 1 || num > 10);
			
		for (cont = 1; cont <= 10; cont++){
			printf("%d X %2d = %2d\n", num, cont, cont * num);
		}
		printf("\n\nDeseja inserir mais um número? ");
		scanf("%c", &opcao);
		fflush(stdin);
		
	} while(opcao == 's');
	
	system("Pause");
	return 0;
}
