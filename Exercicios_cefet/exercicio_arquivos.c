#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    int idade, opcao, resultado, resultado2 = 0;
    float peso, altura, IMC;
    char nome[31], leitura[101];

    FILE *arquivo;

    printf("\nDigite o codigo da opcao que deseja realizar: ");
    printf("\n1 - Gravar as informacoes\n2 - Ler as informacoes\n3 - Encerrar o programa\nSua opcao: ");
    scanf("%d", &opcao);

while (opcao != 3){
    switch(opcao){
        case 1:

           arquivo = fopen("IMC.txt", "w");

            setbuf(stdin, NULL);

            printf("\nInsira seu nome: ");
            gets(nome);

            printf("Insira sua idade: ");
            scanf("%d", &idade);

            printf("Insira sua altura: ");
            scanf("%f", &altura);

            printf("Insira seu peso: ");
            scanf("%f", &peso);

            IMC = peso / (altura * altura);

           if (arquivo == NULL){
                printf("Erro na abertura do arquivo!");
                exit(1);
           }

           fprintf(arquivo, "Nome: %s\nIdade: %d\nAltura: %.2f\nPeso: %.2f\nIMC: %.2f", nome, idade, altura, peso, IMC);

           printf("Informacoes gravadas com sucesso!");

           fclose(arquivo);

           break;
        case 2:
            arquivo = fopen("IMC.txt", "r");

            if(arquivo == NULL){
                printf("Erro ao abrir o arquivo!");
                exit(1);
            }

            printf("\n");

            while (fgets(leitura, 101, arquivo) != NULL){
                printf("%s", leitura);
            }

            fclose(arquivo);

            break;
        case 3:
            printf("Encerando...\n");
            return 0;
        default:
            printf("Opcao invalida!\n");
    }

    printf("\n=============================================\n");

    printf("\nDigite o codigo da opcao que deseja realizar: ");
    printf("\n1 - Gravar as infromacoes\n2 - Ler as informacoes\n3 - Encerrar o programa\nSua opcao: ");
    scanf("%d", &opcao);

}
    return 0;
}
