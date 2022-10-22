#include <stdio.h>
#include <string.h>

int main()
{
  char nome1[31], nome2[31];
  int i;

  printf("Insira o primeiro nome: ");
  gets(nome1);

  printf("Insira o segundo nome: ");
  gets(nome2);

  if (strlen(nome1) != strlen(nome2)){
    printf("Os nomes são diferentes.");
    return 0;
  }

  for (i = 0; i < strlen(nome1); i++){
    if (nome1[i] != nome2[i]){
      printf("Os nomes sao diferentes.");
      return 0;
    }
  }

  printf("Os nomes sao iguais.");

    return 0;
}
