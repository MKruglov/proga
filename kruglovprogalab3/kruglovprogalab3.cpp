// kruglovprogalab3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "Operators.h"
#include "locale.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	float a;
	square first, second;
	cout << "1-ый квадрат: Введите координаты левого верхнего угла, сторону квадрата и угол относительно Ох\n";
	cin >> first.dot.x >> first.dot.y >> first.side >> first.angle;
	first.angle *= (3.14 / 180);
	cout << "2-ой квадрат: Введите координаты левого верхнего угла, сторону квадрата и угол относительно Ох\n";
	cin >> second.dot.x >> second.dot.y >> second.side >> second.angle;
	second.angle *= (3.14 / 180);
	if (first == second)
	{
		cout << "Площади равны" << endl;
	}
	else if (first > second)
	{
		cout << "Первый квадрат больше" << endl;
	}
	else {
		cout << "Второй квадрат больше" << endl;
	}

	cout << "Во сколько раз увеличить первый квадрат?\n";
	cin >> a;
	first = first*a;
	cout << "Сторона первого квадрата теперь равна: " << first.side;

	cout << "\nВведите вектор\n";
	vector vec;
	cin >> vec.vec.x >> vec.vec.y;
	point dot = first + vec;
	cout << "Координата верхнего левого угла квадрата: " << dot.x << " " << dot.y << endl;

	Myarray firstarray, secondarray;
	cout << "Введите длину первого массива\n";
	cin >> firstarray.length;
	cout << "Введите длину второго массива\n";
	cin >> secondarray.length;
	cout << "Введите элементы первого массива: ";
	for (int i = 0; i < firstarray.length; i++)
	{
		cin >> firstarray.mass[i];
	}
	cout << "\nВведите элементы второго массива: ";
	for (int i = 0; i < secondarray.length; i++)
	{
		cin >> secondarray.mass[i];
	}
	if (firstarray.length == secondarray.length)
	{
		cout << "Длины массивов равны" << endl;
	}
	else if (firstarray.length > firstarray.length)
	{
		cout << "Первый массив длиннее" << endl;
	}
	else {
		cout << "Второй массив длиннее" << endl;
	}
	Myarray newarray;
	newarray = firstarray + secondarray;
	cout << "\nНовый массив: " << endl;
	for (int i = 0; i < newarray.length; i++)
	{
		cout << newarray.mass[i] << " ";
	}
	return 0;
}

