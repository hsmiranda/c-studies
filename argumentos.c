/*

Usando argumento

Codigo que apresenta o uso de argumentos em C

*/


#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("O nome do programa sempre sera em argv[0]\n");
	printf("Nome do programa: %s\n\n", argv[0]);

	printf("Em argc temos a quantidade de argumentos passados\n");
	printf("Qtd de argumentos: %d\n\n", argc);

	int i;
	for(i = 0; i < argc; i++) {

		printf("O argumento %d foi %s\n", i, argv[i]);

	}

	return 0;
}

