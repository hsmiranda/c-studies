/*
Autor: Herberson S.M. aka VonNaturAustreVe
Email: vonnatur@0fx66.com
Data: 10/08/2011
-----------------------------------------------------------------------
English
calculator that demonstrates the use of arguments in C

Use:

calc_arg num1 operation num2

num1 and num2 = number wish

operation =
	+ -> sum
	- -> subtraction
	x - multiplication
	/ -> division
-----------------------------------------------------------------------
Portuguese

Calculadora com argumentos
Uso:
calc num1 operacao num2

num1 and num2 = numeros

Operacao:
	+ -> sum
	- -> subtraction
	x - multiplication
	/ -> division
-----------------------------------------------------------------------

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


float soma(float var1, float var2);
float subt(float var1, float var2);
float mult(float var1, float var2);
float divisao(float var1, float var2);

void erro();

int main(int argc, char **argv)
{
	if(argc == 4) {	//Testa para saber se tem todos os parametros necessarios para a execusao

		switch(argv[2][0]) {	//Usei argv[2][0] para pegar o sinal da operacao

			case '+':
				printf("Resultado: %f\n", soma(atof(argv[1]), atof(argv[3])));
			break;

			case '-':
				printf("Resultado: %f\n", subt(atof(argv[1]), atof(argv[3])));
			break;

			case 'x':
				printf("Resultado: %f\n", mult(atof(argv[1]), atof(argv[3])));
			break;

			case '/':

				if(atof(argv[3]) == 0) {	//Caso exista uma divisao por zero.
					printf("Impossivel divisao por zero\n");
				}

				else{	//Se nao houver divisao por zero
					printf("Resultado: %f\n", divisao(atof(argv[1]), atof(argv[3])));
				}
			break;

			default:
				erro();
			break;
		}
		puts("");
	}
	else {
		erro();
	}

	return 0;
}

//funcoes
void erro() {
	printf("Parametros incorretos\n");
	printf("Use: calc_arg numero operacao numero\n");
	printf("A operacao deve ser +, -, x, /\n");
}

float soma(float var1, float var2) {

	return var1+var2;
}

float subt(float var1, float var2) {

	return var1-var2;
}

float mult(float var1, float var2) {

	return var1*var2;
}

float divisao(float var1, float var2) {

	return var1/var2;
}



