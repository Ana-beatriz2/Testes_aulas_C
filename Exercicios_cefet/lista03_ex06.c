#include <stdio.h>

// Questão 6

int main() {

    int contador = 0, continuar = 1;
    float nota1, nota2, nota3, media_aluno, media_turma = 0, maior_media, menor_media;

    while (continuar == 1) {

        printf("\nInsira a primeira nota: ");
        scanf("%f", &nota1);

        printf("Insira a segunda nota: ");
        scanf("%f", &nota2);

        printf("Insira a terceira nota: ");
        scanf("%f", &nota3);

        media_aluno = (nota1 + nota2 + nota3) / 3;

        printf("\nMedia do aluno: %.1f\n", media_aluno);

        contador += 1;
        media_turma += media_aluno;

        if (contador == 1){

            maior_media = media_aluno;
            menor_media = media_aluno;

        }

        else {

            if (media_aluno > maior_media) {

                maior_media = media_aluno;
            }

            if (media_aluno < menor_media) {

                menor_media = media_aluno;
            }

        }

        printf("\nDeseja processar outro aluno? (1 para sim e 0 para nao): ");
        scanf("%d", &continuar);

    }

    printf("\n==========================================================\n");

    printf("\nMaior media da turma: %.1f\nMenor media da turma: %.1f\n", maior_media, menor_media);
    printf("Media da turma: %.1f\n", media_turma / contador);

    return 0;

}
