#include <stdio.h>

int main(){

    int data1, data2, maior = 0, menor = 0, quantidade_dias = 0, contador;

    printf("Insira o primeiro ano: ");
    scanf("%d", &data1);

    printf("Insira o segundo ano: ");
    scanf("%d", &data2);

    if (data1 > data2){
    maior = data1;
    menor = data2;
    }
    else{
    maior = data2;
    menor = data1;
    }
    for (contador = menor; contador < maior; contador++){

        if ((contador % 4 == 0 && contador % 100 != 0) || (contador % 400 == 0)){
            quantidade_dias += 366;
        }
        else{
            quantidade_dias += 365;
        }
    }

    printf("\nO numero de dias decorridos entre %d e %d e igual a %d.\n", data1, data2, quantidade_dias);

    return 0;
}
