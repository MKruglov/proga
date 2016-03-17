#include "stdafx.h"
#include <iostream>
using namespace std;

class Polinom 
{
private: 
    int   a, 
          b, 
          c; 
public: 

    void setPolinom(int ka, int kb, int kc) 
    {
        a   = ka; 
        b = kb; 
        c  = kc; 
    }
    void getPolinom() 
    {
        cout << a << "x^2 + " << b << "x +" << c << endl;
    }
	 void value(int point)
	{
		cout<<(point*point*a+point*b+c);
	}

}; 