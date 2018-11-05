#include "stdafx.h"
#include <stdlib.h>

float read_float()
{
	float value = 0;

	printf("Insira um numero real: ");
	scanf_s("%f", &value);

	return value;
}

float calcule_weighted_average(float note1, float note2, float note3)
{
	float p1 = 2, p2 = 3, p3 = 5;

	return (note1 * p1 + note2 * p2 + note3 * p3) / (p1 + p2 + p3);
}

void get_note_weighted_average()
{
	printf("Insira suas 3 notas:\n");

	float note1 = read_float();
	float note2 = read_float();
	float note3 = read_float();

	printf("Sua media e: %f\n", calcule_weighted_average(note1, note2, note3));
}

int main()
{
	get_note_weighted_average();

	system("pause");

    return 0;
}