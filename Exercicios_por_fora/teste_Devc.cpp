#include <stdio.h>
#include <string.h>

int main(){
	
	char nome[31];
	
	printf("Insira seu nome: ");
	gets(nome);
	
	printf("%s", nome);
	
	return 0;
}
