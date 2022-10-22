#include <stdio.h>

int main(){

	int idade, contador = 0, maior, menor, quantidade_mulheres=0, idade_menor_salario, menor_salario = 0;
	char sexo, sexo_menor_salario;
	float salario, media_salario=0;

	printf("\n==============================\nInforme a idade: ");
	scanf("%d", &idade);


	while (idade >= 0) {

		contador++;

		printf("\nInforme o sexo [F/M]: ");
		scanf(" %c%*C", &sexo);

		if (sexo == 'F' || sexo == 'f') {
			quantidade_mulheres++;
		}

		printf("\nInforme o salario R$");
		scanf("%f", &salario);

		media_salario += salario;

		if (contador == 1) {
			maior = idade;
			menor = idade;
			menor_salario = salario;
		}
		else {
			if (idade > maior) {
				maior = idade;
			}
			if (idade < menor) {
				menor = idade;
			}
			if (salario < menor_salario) {
				menor_salario = salario;
				idade_menor_salario = idade;
				sexo_menor_salario = sexo;
			}
		}

		printf("\n==============================\nInforme a idade: ");
		scanf("%d", &idade);

	}

	media_salario /= contador;

	printf("\nA media dos salarios do grupo: %.2f", media_salario);
	printf("\nMaior idade do grupo = %d. Menor idade do grupo = %d", maior, menor);
	printf("\nQuantidade de mulheres na regiao: %d", quantidade_mulheres);
	printf("\nInformacoes da pessoa com menor salario:");
	printf("\nIdade = %d.\nSexo = %c", idade_menor_salario, sexo_menor_salario);

}
