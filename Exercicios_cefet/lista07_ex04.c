#include <stdio.h>
#include <string.h>

int main()
{
  char palavra[31];
  int i, tamanho;

  printf("Insira um nome: ");
  gets(palavra);

  tamanho = strlen(palavra);

  for (i = (tamanho-1); i >= 0; i--){
    printf("%c", palavra[i]);
  }

  return 0;
}
