#include <stdio.h>

int main(){

    /*int x = 10, *ponteiro;
    ponteiro = &x;

    int y = 20;
    *ponteiro = y;

    printf("X: %d Y: %d", x, y);*/

    int x = 10;
    float y = 20.5;
    char z =  's';

    int *ponteiroX = &x;

    float *ponteiroY = &y;

    char *ponteiroZ = &z;

    float soma = *ponteiroX + *ponteiroY;

    printf("%f", soma);

    return 0;
}
