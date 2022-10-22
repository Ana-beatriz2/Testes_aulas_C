#include <stdio.h>

// Questão 1

int main(){

    int itens_estoque, numero_pedido;

    printf("Insira a quantidade de itens em estoque: ");
    scanf("%d", &itens_estoque);

    printf("Insira o numero de itens a serem fornecidos: ");
    scanf("%d", &numero_pedido);

    if (numero_pedido > itens_estoque) {

        printf("\nNao ha itens suficientes em estoque para completar o pedido.\n");

    }

    else {

        printf("\nPedido processado com sucesso!\n");
        printf("Total atualizado de itens em estoque: %d\n", itens_estoque - numero_pedido);

    }

    return 0;

}
