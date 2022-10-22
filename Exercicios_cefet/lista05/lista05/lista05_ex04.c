#include <stdio.h>

int main(){

	int numero, no_intervalo = 0, fora_intervalo = 0, contador;

	for (contador = 0; contador < 10; contador++){

		printf("Insira o %do numero: ", contador + 1);
		scanf("%d", &numero);

		if (numero >= 10 && numero <= 20) {
			no_intervalo++;
		}

		else {
			fora_intervalo++;
		}
	}

	printf("\nQuantidade de numeros inseridos que estao dentro do intervalo [10, 20]: %d.\nQuantidade de numeros que estao fora desse intervalo: %d.\n", no_intervalo, fora_intervalo);

	return 0;
}
