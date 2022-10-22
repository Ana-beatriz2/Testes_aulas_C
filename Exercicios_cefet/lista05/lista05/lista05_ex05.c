#include <stdio.h>

int main() {

	int contador = 0, contador2 = 0;
	float media_aluno, media_geral = 0, nota;

	while (contador < 3) {

		printf("\nALUNO %d\n", contador+1);

		media_aluno = 0;

		contador2 = 0;


		while (contador2 < 3) {

			printf("\nInsira a %da nota: ", contador2 + 1);
			scanf(" %f", ¬a);

			media_aluno += nota;

			contador2++;
		}

		contador++;

		media_aluno /= 3;

		printf("\nMedia do aluno: %.1f", media_aluno);

		media_geral += media_aluno;
	}

	media_geral /= 3;

	printf("Media da nota dos alunos: %.1f", media_geral);

	return 0;
}
