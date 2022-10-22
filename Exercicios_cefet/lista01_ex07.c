#include <stdio.h>

int main(){

    float saldo_poupanca, novo_saldo;

    printf("Insira o saldo da conta poupaca: R$ ");
    scanf("%f", &saldo_poupanca);

    novo_saldo = saldo_poupanca + ((saldo_poupanca * 2) / 100);

    printf("Saldo com um reajuste de 2%%: R$ %.2f\n", novo_saldo);

    return 0;

}
