/*
Raiz
 */


#include <stdio.h>
#include <math.h>

int main()
{
	//codigo de exemplo para a execucao da funcao pow()
	int base,expoente,resultado;

	printf("Digite a base: ");
	scanf("%d", &base);

	printf("Digite o expoente: ");
	scanf("%d",&expoente);

	//efetua a exponenciacao.
	resultado=pow(base,expoente);

	printf("O numero %i elevado a %i e igual a %i",base,expoente,resultado);


	return 0;
}

