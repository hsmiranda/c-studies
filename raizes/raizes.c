/*
Raiz
 */


#include <stdio.h>
#include <math.h>

int main() {
	int radicando,raiz;

	printf("Digite o radicando: ");
	scanf("%i",&radicando);

	raiz = sqrt(radicando); //Aqui esta a magica!!!

	printf("A raiz quadrada de %i e igual a %i\n",radicando,raiz);

	return 0;
}

