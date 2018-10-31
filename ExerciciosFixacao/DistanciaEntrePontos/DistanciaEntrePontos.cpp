#include "stdafx.h"
#include <stdlib.h>

// Biblioteca para funções matemáticas como raiz quadrada, potência, etc.
#include <math.h>

double read_float()
{
	double value = 0;

	printf("Insira um numero real: ");
	scanf_s("%lf", &value);

	return value;
}

// Calcula a distancia entre dois pontos.
double calcule_distance_between_points(int x1, int y1, int x2, int y2)
{
	return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

// Função que pede os valores de 2 pontos e exibe a sua distância.
void get_distance_between_points()
{
	printf("Insira o valor de x e y do primeiro ponto:\n");

	double x1 = read_float();
	double y1 = read_float();

	printf("Insira o valor de x e y do segundo ponto:\n");

	double x2 = read_float();
	double y2 = read_float();

	printf("A distancia entres os pontos (%lf,%lf) e (%lf,%lf) e: %lf", x1, y1, x2, y2, calcule_distance_between_points(x1, y1, x2, y2));
}

int main()
{
	get_distance_between_points();

	system("pause");

	return 0;
}