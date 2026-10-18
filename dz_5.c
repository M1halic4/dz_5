#define _CRT_SECURE_NO_WARNINGS

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
	double x, y, z;

	printf("Введите значения x y z: ");
	
	//Ввод чмсел пользователем
	scanf("%lf %lf %lf", &x, &y, &z);

	//Расчёт левой и а=правой части примера
	float left = fabs(pow(x, y / x) - pow(y / x, 1.0 / 3));
	float right = (y - x) * (cos(y) - z / (y - x)) / (1 + pow(y - x, 2));
	
	//Сложение левой и правой части
	float psi = left + right;

	//Вывод результата
	printf("%.lf", psi);

	return 0;
}