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
    cout << "������� ���������\n";
    cin >> a ;
    cout << "x^2\n+\n";   
	cin >> b;
    cout << "x\n+\n";
	cin >> c;
    Polinom mnogochlen; 
    mnogochlen.setPolinom(a, b, c);
    mnogochlen.getPolinom(); 

	cout<<"����� ��������� ����� ���������?\n" ;
	cout<<"	1 - ��������� �������� � �������� �����.\n";
    cout<<"2 - ���������� ���������� ������.\n";
	cout<<"3 - ���������� ������.\n";
	cout<<"4 - ����� ��������/���������.\n";
	cout<<"5 -����� �� �����.\n";
	cin >> sw;
	switch (sw)
	{
	case 1: cout << "������� �����\n ";cin>>point, mnogochlen.value(point);
	default:
		break;
	}
    system("pause");

    return 0;
}

