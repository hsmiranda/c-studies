#include <stdio.h>
#include <stdlib.h>

int soma(int *n1, int *n2);
int subtracao(int *n1, int *n2);

int main() {

	int num1, num2;

	printf("Digite umm numero: ");
	scanf("%d", &num1);

	printf("Digite o segundo numero:");
	scanf("%d", &num2);

	printf("Soma: %d\n", soma(&num1, &num2));
	printf("Subtracao: %d\n", subtracao(&num1, &num2));

	system("pause");

	return 0;
}

int soma(int *n1, int *n2) {
	return *n1+*n2;
}

int subtracao(int *n1, int *n2) {
	return *n1-*n2;
}

