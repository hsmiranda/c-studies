//calcula raiz com pow()
#include <stdio.h>
#include <math.h>

int main() {
	
	double raiz,radicando,indice;

	printf("Digite o radicando: ");
	scanf("%lf",&radicando);

	printf("Digite o indice da raiz: ");
	scanf("%lf",&indice);

	//Calculo da raiz usando pow
	raiz=pow(radicando, 1/indice); //Aqui esta a magica!!! 

	printf("A raiz de %lf com indice %lf = %lf\n",radicando,indice,raiz);

	return 0;
}
