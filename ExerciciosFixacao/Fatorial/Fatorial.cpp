#include "stdafx.h"
#include <stdlib.h>

int read_int();
int fatorial(int);

int main()
{
	printf("Fatorial:\n");

	int ft = fatorial(read_int());

	printf("Resultado: %i\n", ft);

	system("pause");

	return 0;
}

int read_int()
{
	int value = 0;

	printf("Insira um numero inteiro: ");
	scanf_s("%i", &value);

	return value;
}

// Criado fun��o que calcula o fatorial utilizando a recursividade.
// Cuidado! a recursividade utiliza mais mem�ria do que a utiliza��o de loops. Isto faz diferen�a em grandes recursividades.
int fatorial(int n)
{
	int current = n - 1;

	if (current < 1)
		return 1;

	return n * fatorial(current);
}