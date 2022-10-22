#include <stdio.h>
#include <math.h>


float distancia_pontos(float x1, float y1, float x2, float y2){

    float resultado;

    resultado = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));

    resultado = sqrt(resultado);

    return resultado;
}

int main(){

    float x1, y1, x2, y2;

    printf("Insira um valor para X1: ");
    scanf("%f", &x1);

    printf("Insira um valor para Y2: ");
    scanf("%f", &y1);

    printf("Insira um valor para X2: ");
    scanf("%f", &x2);

    printf("Insira um valor para Y2: ");
    scanf("%f", &y2);

    printf("\nA distancia entre os pontos (%.1f, %.1f) e (%.1f, %.1f) e igual a: %.2fm\n", x1, y1, x2, y2, distancia_pontos(x1, y1, x2, y2));

    return 0;

}
