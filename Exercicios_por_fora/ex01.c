#include <stdio.h>
#include <locale.h>
#include <math.h>

/* Leia um numero fornecido pelo usu ´ ario. Se esse n ´ umero for positivo, calcule a raiz ´
quadrada do numero. Se o n ´ umero for negativo, mostre uma mensagem dizendo que o ´
numero ´ e inv ´ alido.*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float numero, raiz_quadrada;

    printf("Insira um número para calcular sua raiz quadrada: ");
    scanf("%f", &numero);

    if (numero > 0) {

        raiz_quadrada = sqrt(numero);

        printf("\nA raiz quadrada de %f é igual a %f\n", numero, raiz_quadrada);

    }

    else {


        printf("\nNúmero inválido!\n");
    }


    return 0;

}
