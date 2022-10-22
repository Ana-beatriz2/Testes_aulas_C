#include <stdio.h>
#include <string.h>

int main()
{
  char numero[100];
  int i, cont = 0;

  printf("Insira um valor: ");
  gets(numero);

  for (i = 0; i < strlen(numero); i++){
    if (numero[i] == '1'){
      cont++;
    }
  }

  printf("Quantidade de '1s' presentes no numero %s: %d\n", numero, cont);

  return 0;
}
