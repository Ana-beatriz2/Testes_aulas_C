#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "");

    int centigrados, fahrenheit;

    printf("Informe a temperatura em graus centígrados: ");
    scanf("%d", &centigrados);

    fahrenheit = (9 * centigrados + 160) / 5;

    printf("%d°C equivale a %d°F\n", centigrados, fahrenheit);

    return 0;

}
