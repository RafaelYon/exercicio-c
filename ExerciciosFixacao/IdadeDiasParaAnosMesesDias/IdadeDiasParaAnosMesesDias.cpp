#include "stdafx.h"
#include <stdlib.h>

int read_positive_int()
{
	int value = 0;
	bool correct = false;

	do
	{
		printf("Insira um valor positivo: ");
		scanf_s("%d", &value);

		if (value > -1)
		{
			correct = true;
		}
		else
		{
			printf("O valor deve ser maior que -1. Por favor tente novamente.\n");
		}
	} while (!correct);

	return value;
}

void turn_days_age_into_year_months_days()
{
	printf("Insira a quantidade de dias que voca viveu:\n");

	int lived_days = read_positive_int();

	int years = lived_days / 365;

	int months = lived_days / 30;

	printf("Voce ja viveu:\n%d anos.\n%d meses.\n%d dias.\n", years, months, lived_days);
}

int main()
{
	turn_days_age_into_year_months_days();

	system("pause");
	
	return 0;
}

