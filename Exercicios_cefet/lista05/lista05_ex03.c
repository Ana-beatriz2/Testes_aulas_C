#include <stdio.h>


int main(){

	int numero, quantidade_par = 0, quantidade_impar = 0, contador;

	for (contador = 0; contador < 10; contador++) {

		printf("Insira o %do numero: ", contador + 1);
		scanf("%d", &numero);

		if (numero % 2 == 0) {
			quantidade_par += 1;
		}

		else {
			quantidade_impar += 1;
		}
	}

	printf("Quantidade de numeros pares inseridos: %d", quantidade_par);
	printf("\nQuantidade de numeros impares inseridos:  %d\n", quantidade_impar);

	return 0;
}
