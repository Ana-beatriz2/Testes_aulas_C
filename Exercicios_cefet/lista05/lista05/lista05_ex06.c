#include <stdio.h>

int main(){

	int numero;

	printf("Insira um numero entre 12 e 20: ");
	scanf("%d", &numero);

	while (numero < 12 || numero > 20) {

		printf("\nEntrada invalida!");
		printf("\nInsira um numero entre 12 e 20: ");
		scanf("%d", &numero);

	}

	printf("\nNumero inserido: %d", numero);
	return 0;
}
