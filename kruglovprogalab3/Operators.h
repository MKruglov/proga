#pragma once
struct point
{
	int x, y;
};
struct square
{
	point dot;
	float side;
	float angle;
};
struct vector
{
	point vec;
};
struct Myarray
{
	int mass[100];
	int length;
};
bool& operator == (square const&, square const&);
bool& operator != (square const&, square const&);
bool& operator > (square const&, square const&);
bool& operator < (square const&, square const&);
point& operator +(square, vector);
square operator *(square b, float a);
Myarray& operator + (Myarray const&, Myarray const&);
bool& operator == (Myarray const&, Myarray const&);
bool& operator != (Myarray const&, Myarray const&);
bool& operator > (Myarray const&, Myarray const&);
bool& operator < (Myarray const&, Myarray const&);

float lengtharr(Myarray);

