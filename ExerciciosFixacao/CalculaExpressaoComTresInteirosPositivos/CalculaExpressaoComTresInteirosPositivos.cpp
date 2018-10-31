#include "stdafx.h"
#include <stdlib.h>
#include <math.h>

int read_positive_int()
{
	int value = 0;
	bool isPositive = false;

	while (!isPositive)
	{
		printf("Insira um numero interiro positivo: ");

		scanf_s("%i", &value);

		if (value < 0)
		{
			printf("O valor nao pode ser negativo.\n");
		}
		else
		{
			isPositive = true;
		}
	}

	return value;
}

double calcule_ABC_math_expression(int a, int b, int c)
{
	double r = pow(a + b, 2);

	double s = pow(b + c, 2);

	return (r + s) / 2;
}

void get_ABC_math_result()
{
	printf("Insira os valores de A, B e C (nesta ordem):\n");

	int a = read_positive_int();
	int b = read_positive_int();
	int c = read_positive_int();

	printf("D = %lf", calcule_ABC_math_expression(a, b, c));
}

int main()
{
	get_ABC_math_result();

	system("pause");
	
	return 0;
}