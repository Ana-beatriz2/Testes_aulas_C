#include <stdio.h>
#include <string.h>

int main(){

	char frase[101], frase_final[101];
	int cont = 0, i, tamanho, cont2 = 0;

	printf("Insira uma frase: ");
	gets(frase);

	tamanho = strlen(frase);

	for (i = 0; i < tamanho; i++){
		if (frase[i] == ' '){
			cont++;
		}
		else {
			frase_final[cont2] = frase[i];
			cont2++;
		}
	}

	for (i = 0; i < cont2; i++){
		printf("%c", frase_final[i]);
	}

	printf("\nQuantidade de espacos presentes na frase: %d\n", cont);

	return 0;
}
