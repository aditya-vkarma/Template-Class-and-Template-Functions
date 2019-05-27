// template_function.cpp : main project file.

#include "stdafx.h"
#include<iostream>
#include<conio.h>

using namespace std; 

class A{public: char sign;};
A a, ae;

class B{public: char sign;};
B b;


template<class D_TYPE, class D_TYPE1>
void func(D_TYPE ob1 = c, D_TYPE1 ob2 = a, D_TYPE1 ob3 = ae, int i = 3, char *sptr = "RDB")
{
	cout<<typeid(ob1).name()<<endl;
	cout<<typeid(ob2).name()<<endl;
	cout<<typeid(ob3).name()<<endl;
	cout<<ob1.sign<<endl;
	cout<<ob2.sign<<endl;
	cout<<ob3.sign<<endl;

}

int main()
{
	a.sign = 'a';
	ae.sign = 'e';
	b.sign = 'b';
	
	func(b, a);

	_getch();
	return 0;
}
}
