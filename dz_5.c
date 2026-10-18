#include <stdio.h>
#include <locale.h>
#include <math.h>

int dz();

int main()
{
	setlocale(LC_ALL, "RUS");

	dz();

	return 0;
}

int dz()
{
	//Инициализация переменных
	float x = 1.825e2, y = 18.225, z = -3.298e-2;

	//Расчёт левой и а=правой части примера
	double left = fabs(pow(x, y / x) - pow(y / x, 1.0 / 3));
	double right = (y - x) * (cos(y) - z / (y - x)) / (1 + pow(y - x, 2));
	
	//Сложение левой и правой части
	double psi = left + right;

	//Вывод результата
	printf("%.4lf", psi);
}