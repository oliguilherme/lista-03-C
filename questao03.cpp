#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int soma = 0;
	
	for (int primo = 1; primo <= 1000; primo += 2)
		soma += primo;
	
	printf("A soma dos números inteiros é: %d\n\n", soma);
	system("pause");
	return 0;
}
