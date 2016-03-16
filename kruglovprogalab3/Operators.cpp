#include "stdafx.h"
#include <iostream>
#include "Operators.h"

bool& operator == (square const& a, square const& b)
{
	bool tmp;
	if (pow(a.side, 2) == pow(b.side, 2)) tmp = 1;
	else tmp = 0;
	return tmp;
}
bool& operator != (square const& a, square const& b)
{
	bool tmp;
	if (pow(a.side, 2) != pow(b.side, 2)) tmp = 1;
	else tmp = 0;
	return tmp;
}
bool& operator > (square const& a, square const& b)
{
	bool tmp;
	if (pow(a.side, 2) > pow(b.side, 2)) tmp = 1;
	else tmp = 0;
	return tmp;
}
bool& operator < (square const& a, square const& b)
{
	bool tmp;
	if (pow(a.side, 2) < pow(b.side, 2)) tmp = 1;
	else tmp = 0;
	return tmp;
}
point& operator + (square a, vector b)
{
	a.dot.x += b.vec.x;
	a.dot.y += b.vec.y;
	return a.dot;
};
square operator *(square b, float a)
{
	b.side = b.side * a;
	return b;
}

Myarray& operator + (Myarray const& first, Myarray const& second)
{	
	Myarray newarray; 
	for (int i = 0; i < first.length; i++)
		newarray.mass[i] = first.mass[i];
	for (int i = 0; i < second.length; i++)
		newarray.mass[i + first.length] = second.mass[i];
	newarray.length = second.length + first.length;
	return newarray;
}
float sq(square a)
{
	return pow(a.side, 2);
}

bool& operator == (Myarray const& a, Myarray const& b)
{
	bool tmp;
	if (a.length == b.length) tmp = 1;
	else tmp = 0;
	return tmp;
}
bool& operator != (Myarray const& a, Myarray const& b)
{
	bool tmp;
	if (pow(a.length, 2) != pow(b.length, 2)) tmp = 1;
	else tmp = 0;
	return tmp;
}
bool& operator > (Myarray const& a, Myarray const& b)
{
	bool tmp;
	if (pow(a.length, 2) > pow(b.length, 2)) tmp = 1;
	else tmp = 0;
	return tmp;
}
bool& operator < (Myarray const& a, Myarray const& b)
{
	bool tmp;
	if (pow(a.length, 2) < pow(b.length, 2)) tmp = 1;
	else tmp = 0;
	return tmp;
}