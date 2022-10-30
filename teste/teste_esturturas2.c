#include <stdio.h>
#include <string.h>

struct Aluno{
    int matricula;
    float nota1, nota2, nota3, media;
    char nome[51];
};

int main(){

    struct Aluno alunos[5];
    int i, j = 0;
    char alunos_maior_media[41], alunos_menor_media[41], alunos_maior_nota[41];
    float maior_nota, maior_media, menor_media;

    for (i = 0; i < 5; i++){
        printf("\nAluno %d\n", i+1);

        printf("Insira a matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Insira o nome: ");
        gets(alunos[i].nome);

        printf("Insira a primeira nota: ", i+1);
        scanf("%f", &alunos[i].nota1);

        printf("Insira a segunda nota: ", i+1);
        scanf("%f", &alunos[i].nota2);

        printf("Insira a terceira nota: ", i+1);
        scanf("%f", &alunos[i].nota3);

        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;

        if (i == 0){
            maior_nota = alunos[i].nota1;
            strcpy(alunos_maior_nota, alunos[i].nome);

            maior_media = alunos[i].media;
            menor_media = alunos[i].media;
            strcpy(alunos_maior_media, alunos[i].nome);
            strcpy(alunos_maior_media, alunos[i].nome);
        }
        else{
            if (alunos[i].nota1 > maior_nota){
                maior_nota = alunos[i].nota1;
                strcpy(alunos_maior_nota, alunos[i].nome);
            }
            if (alunos[i].media > maior_media){
                maior_media = alunos[i].media;
                strcpy(alunos_maior_media, alunos[i].nome);
            }

            if (alunos[i].media < menor_media){
                menor_media = alunos[i].media;
                strcpy(alunos_maior_media, alunos[i].nome);
            }
        }

    }

    printf("\nA maior media geral foi de %s com %.1f", alunos_maior_media, maior_media);
    printf("\nA menor media geral foi de %s com %.1f", alunos_menor_media, menor_media);
    printf("\nA maior nota na primeira prova foi de %s com %.1f", alunos_maior_nota, maior_nota);

    return 0;
}
