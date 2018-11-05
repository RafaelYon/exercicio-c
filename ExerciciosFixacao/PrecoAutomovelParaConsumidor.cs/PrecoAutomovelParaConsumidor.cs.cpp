#include "stdafx.h"
#include <stdlib.h>

double read_double()
{
	double value = 0;

	printf("Insira um numero real: ");
	scanf_s("%lf",&value);

	return value;
}

double calcule_final_price(double price)
{
	return price + (price * 0.28) + (price * 0.45);
}

void get_final_price()
{
	printf("Insira o preco de fabrica\n");
	
	double price = read_double();

	printf("O custo de consumidor e: %lf\n", calcule_final_price(price));
}

int main()
{
	get_final_price();

	system("pause");

    return 0;
}

