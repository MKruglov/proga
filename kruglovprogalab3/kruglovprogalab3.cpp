// kruglovprogalab3.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	cout << "1-�� �������: ������� ���������� ������ �������� ����, ������� �������� � ���� ������������ ��\n";
	cin >> first.dot.x >> first.dot.y >> first.side >> first.angle;
	first.angle *= (3.14 / 180);
	cout << "2-�� �������: ������� ���������� ������ �������� ����, ������� �������� � ���� ������������ ��\n";
	cin >> second.dot.x >> second.dot.y >> second.side >> second.angle;
	second.angle *= (3.14 / 180);
	if (first == second)
	{
		cout << "������� �����" << endl;
	}
	else if (first > second)
	{
		cout << "������ ������� ������" << endl;
	}
	else {
		cout << "������ ������� ������" << endl;
	}

	cout << "�� ������� ��� ��������� ������ �������?\n";
	cin >> a;
	first = first*a;
	cout << "������� ������� �������� ������ �����: " << first.side;

	cout << "\n������� ������\n";
	vector vec;
	cin >> vec.vec.x >> vec.vec.y;
	point dot = first + vec;
	cout << "���������� �������� ������ ���� ��������: " << dot.x << " " << dot.y << endl;

	Myarray firstarray, secondarray;
	cout << "������� ����� ������� �������\n";
	cin >> firstarray.length;
	cout << "������� ����� ������� �������\n";
	cin >> secondarray.length;
	cout << "������� �������� ������� �������: ";
	for (int i = 0; i < firstarray.length; i++)
	{
		cin >> firstarray.mass[i];
	}
	cout << "\n������� �������� ������� �������: ";
	for (int i = 0; i < secondarray.length; i++)
	{
		cin >> secondarray.mass[i];
	}
	if (firstarray.length == secondarray.length)
	{
		cout << "����� �������� �����" << endl;
	}
	else if (firstarray.length > firstarray.length)
	{
		cout << "������ ������ �������" << endl;
	}
	else {
		cout << "������ ������ �������" << endl;
	}
	Myarray newarray;
	newarray = firstarray + secondarray;
	cout << "\n����� ������: " << endl;
	for (int i = 0; i < newarray.length; i++)
	{
		cout << newarray.mass[i] << " ";
	}
	return 0;
}

