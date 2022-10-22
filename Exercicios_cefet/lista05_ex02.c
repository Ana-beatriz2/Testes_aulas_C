#include <stdio.h>

int main(){

	int numero, contador;

	printf("Insira um numero entre 1 e 10 para ver sua tabuada: ");
	scanf("%d", &numero);

	while (numero > 10 || numero < 1) {

		printf("Erro! Por favor, insira um numero entre 1 e 10: ");
		scanf("%d", &numero);

	}

	for (contador = 1; contador <= 10; contador++) {

		printf("\n%d x %d = %d", numero, contador, numero * contador);

	}


	return 0;
}
