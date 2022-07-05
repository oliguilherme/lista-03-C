#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int n, inicio, quadrado;
	
	printf("Insira um número: ");
	scanf("%d", &n);
	
	for (inicio = 1; inicio <= n; inicio++){
		if (inicio % 2 == 0){
			quadrado = pow(inicio, 2);
			printf("\nO quadrado de %d é %d\n", inicio, quadrado);	
		}
	}
	printf("\n");
	
	system("pause");
	return 0;
}
