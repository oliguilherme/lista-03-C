#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int mult, soma = 0;
	
	for (mult = 7; mult <= 9999; mult += 7)
		soma += mult;
	
	printf("A soma dos m�ltiplos de 7 �: %d\n\n", soma);
	
	system("pause");
	return 0;
}
