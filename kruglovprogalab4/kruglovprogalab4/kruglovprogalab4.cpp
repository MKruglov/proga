// kruglovprogalab4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Polinom.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    setlocale(LC_ALL, "rus"); 
    int a, b, c, sw, point;
    cout << "Введите многочлен\n";
    cin >> a ;
    cout << "x^2\n+\n";   
	cin >> b;
    cout << "x\n+\n";
	cin >> c;
    Polinom mnogochlen; 
    mnogochlen.setPolinom(a, b, c);
    mnogochlen.getPolinom(); 

	cout<<"Какую процедуру нужно выполнить?\n" ;
	cout<<"	1 - Вычислить значения в заданной точке.\n";
    cout<<"2 - Нахождения количества корней.\n";
	cout<<"3 - Нахождение корней.\n";
	cout<<"4 - Поиск минимума/максимума.\n";
	cout<<"5 -Вывод на экран.\n";
	cin >> sw;
	switch (sw)
	{
	case 1: cout << "Введите точку\n ";cin>>point, mnogochlen.value(point);
	default:
		break;
	}
    system("pause");

    return 0;
}

