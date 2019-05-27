// tmplt clss s arg 2 clss tmplt.cpp : main project file.

#include "stdafx.h"
#include<iostream>
#include<conio.h>

using namespace std;


template<class Type1, class Type2>
class Pair
{
public:
	Type1 first;
	Type2 second;

	Pair() : first(Type1()), second(Type2())
	{
		cout<<typeid(*this).name()<<" DEF cons called\n";
	}

	Pair(Type1 ob1, Type2 ob2)
	{
		first = ob1;
		second = ob2;
	}
};

template<class T, int SIZE>
class Array
{
public:
	T TheArray[SIZE];
	Array()
	{
		cout<<typeid(*this).name()<<" Def cons called\n";
	}
	T& operator[](int n)
	{
		cout<<"Inside Array's operator[]\n";
		if(n<0 || n>=SIZE)
		{
			cout<<"Array index violation\n";
			abort();
		}
		return TheArray[n];
	}
	//void operator=(const T obj)
	//{
	//	cout<<"Inside Array's operator=\n";
	//}
};

int main()
{
	Pair<int, Array<double, 4>> PairOfArray;
	for(int i=0;i<4;i++)
		PairOfArray.second[i] = (double)(i * i)/2;
	for(int i=0;i<4;i++)
		cout<<PairOfArray.second[i]<<endl;
	_getch();
	return 0;
}
	

/*
int main()
{
	Array<Pair<int, double>, 5> ArrayOfPair;

	for(int i=0;i<5;i++)
	{
		cout<<"ArrayOfPair.TheArray["<<i<<"].first = "<<ArrayOfPair.TheArray[i].first<<endl;
		cout<<"ArrayOfPair.TheArray["<<i<<"].second = "<<ArrayOfPair.TheArray[i].second<<endl<<endl;
	}

	ArrayOfPair[0] = Pair<int, double>(15, 3.14169);

	cout<<ArrayOfPair.TheArray[0].first<<endl;
	cout<<ArrayOfPair.TheArray[0].second<<endl;

	_getch();
	return 0;
}*/


/*
class A
{
public:
	int first;
	Array<double, 50> second;

	A() : first(int()), second(Array<double, 50>())
	{
		cout<<"A's DEF. cons\n";
	}
};

int main()
{
	A a;
	_getch();
	return 0;
}
*/