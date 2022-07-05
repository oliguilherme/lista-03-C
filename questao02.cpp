#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int senha = 123456;
	
	printf("Senha: ");
	scanf("%d", &senha);
	
	while(senha != 123456){
		printf("Acesso negado!");
		printf("\nSenha: ");
		scanf("%d", &senha);
	}
	
	printf("\n\nAcesso permitido!\n\n");
	
	system("pause");
	return 0;	
}
