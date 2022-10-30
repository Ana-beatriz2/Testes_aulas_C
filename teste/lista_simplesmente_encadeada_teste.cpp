#include <stdio.h>

struct No{
    int dado;
    struct No *prox;
} *inicio = NULL;

int inserir(int valor){
   struct No *novo;

   novo = new struct No();
   novo -> dado = valor;
   novo -> prox = inicio;
   inicio = novo;

   return 0;
}

int imprimir(){

    struct No *aux = inicio;

    if (aux == NULL){
        printf("Lista vazia!!");
    }
    else{
        while (aux != NULL){
            printf(" %d ", aux -> dado);
            aux = aux -> prox;
        }
    }

    return 0;

}

struct No* Buscar(int valor){

    struct No *aux = inicio;

    if (aux == NULL){
        printf("Lista vazia!!");
    }
    else{
        while (aux != NULL){
            if (aux -> dado == valor){
                return aux;
            }

            aux = aux -> prox;
        }
    }
}

void alterar(int valor_subtituido){

    struct No *aux;
    int novo_valor;

    aux = Buscar(valor_subtituido);

    if (aux == NULL){
        printf("Valor nao encontrado!");
    }
    else{
        printf("Insira o valor para substituir o numero %d: ", valor_subtituido);
        scanf("%d", &novo_valor);

        aux -> dado = novo_valor;
    }
}

int inserir_no_final(int valor){
    struct No *novo, *aux = inicio;

    novo = new struct No();
    novo -> dado = valor;

    if (inicio == NULL){
        novo -> prox = NULL;
        inicio = novo;
    }
    else{

        while (aux -> prox != NULL){
            aux = aux -> prox;
        }

        aux -> prox = novo;
        novo -> prox = NULL;
    }

    return 0;
}

int deletar(){
    struct No *z = inicio;
    struct No *aux;

    if (z == NULL){
        printf("A lista está vazia!!");
    }
    else{
        while (z != NULL){
            z = z -> prox;
            aux = z;
            delete z;
            z = aux;
        }
    }
}

int deletar_um_numero(int x){
    struct No *aux = inicio, *temp, *aux2;

    temp = Buscar(x);

    if (temp == NULL){
        printf("Numero nao encontrado!");
    }

    while (aux != NULL){

        aux2 = aux;
        aux = aux -> prox;

        if (aux -> dado == x){
            aux2 -> prox = aux -> prox;
            delete temp;
        }
    }

}


int main(){

    int opcao, numero;
    struct No *temp;

    do{
        printf("\n=======================\nEscolha a opcao desejada\n=======================\n");
        printf("1- Inserir\n2- Inserir no final\n3- Imprimir\n4- Buscar\n5- Alterar\n6- Finalizar\n7-Deletar\n8-Deletar um elemento\n=======================\nSua opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
        case 1:
            printf("Insira o dado: ");
            scanf("%d", &numero);
            inserir(numero);
            break;
        case 2:
            printf("Insira o dado: ");
            scanf("%d", &numero);
            inserir_no_final(numero);
            break;
        case 3:
            imprimir();
            break;
        case 4:
            printf("Insira o valor a ser buscado: ");
            scanf("%d", numero);

            temp = Buscar(numero);

            if (temp == NULL){
                printf("Valor nao encontrado");
            }
            else{
               printf("\nO valor %d foi encontrado na posicao %p", numero, temp);
            }
            break;
        case 5:
            printf("Insira o numero a ser substituido: ");
            scanf("%d", &numero);

            alterar(numero);
            break;
        case 6:
            printf("Finalizando...");
            break;
        case 7:
            deletar();
            break;
        case 8:
            printf("Insira o numero a ser deletado: ");
            scanf("%d", &numero);
            deletar_um_numero(numero);
        default:
            printf("Opcao invalida!");
        }
    } while (opcao != 8);

    return 0;
}
