// joker.cpp : main project file.

#include "stdafx.h"
#include<iostream>
#include<conio.h>

using namespace std;

template<class Type1, class Type2>
struct Pair
{
	Type1 first;
	Type2 second;

	Pair(Type1 p1 = Type1(), Type2 p2 = Type2())
	{
		cout<<"Inside DEF. cons\n";
		first = p1;
		second = p2;
	}

	/*Pair() : first(Type1()), second(Type2())
	{}

	Pair(const Type1 &t1, const Type2 &t2) :  first(t1), second(t2)
	{}*/

	Pair(const Pair<Type1, Type2> &OtherPair) :  first(OtherPair.first), second(OtherPair.second)
	{}

	bool operator==(const Pair<Type1, Type2> op2)const
	{
		return ((first == op2.first) && (second == op2.second));
	}
	bool operator<=(const Pair<Type1, Type2> op2)const
	{
		return ((first <= op2.first) && (second <= op2.second));
	}
	bool operator>=(const Pair<Type1, Type2> op2)const
	{
		return ((first >= op2.first) && (second >= op2.second));
	}
	bool operator<(const Pair<Type1, Type2> op2)const
	{
		return ((first < op2.first) && (second < op2.second));
	}
	bool operator>(const Pair<Type1, Type2> op2)const
	{
		return ((first > op2.first) && (second > op2.second));
	}
	bool operator!=(const Pair<Type1, Type2> op2)const
	{
		return ((first != op2.first) && (second != op2.second));
	}
	Pair<Type1, Type2> operator=(const Pair<Type1, Type2> op2)
	{
		cout<<"Inside operator=...\n";
		first = op2.first;
		second = op2.second;

		return *this;
	}
	void swap(Pair<Type1, Type2> &ref)
	{
		Type1 temp1 = first;
		first = ref.first;
		ref.first = temp1;

		Type2 temp2 = second;
		second = ref.second;
		ref.second = temp2;
	}
};

class A{public:~A(){cout<<"Inside DES\n";}};

int main()
{
	Pair<int,int> point1(12,39);
	//Pair<int,int> point2(point1);
	Pair<int,int> point2(13, 40);

	if(point1 == point2)
		cout<<"Both are equal\n";
	else
		cout<<"Both unequal\n";

	if(point1 <= point2)
		cout<<"point1 <= point2\n";
	else
		cout<<"NOT <=\n";

	if(point1 >= point2)
		cout<<"point1 >= point2\n";
	else
		cout<<"NOT >=\n";

	if(point1 < point2)
		cout<<"point1 < point2\n";
	else
		cout<<"NOT <\n";

	if(point1 > point2)
		cout<<"point1 > point2\n";
	else
		cout<<"NOT >\n";

	if(point1 != point2)
		cout<<"point1 != point2\n";
	else
		cout<<"point1 == point2\n";

	cout<<point1.first<<"\	"<<point1.second<<endl;
	cout<<point2.first<<"\	"<<point2.second<<endl;

	point1.swap(point2);
	cout<<point1.first<<"\	"<<point1.second<<endl;
	cout<<point2.first<<"\	"<<point2.second<<endl<<endl;
	
	point1 = point2;
	cout<<point1.first<<"\	"<<point1.second<<endl;
	cout<<point2.first<<"\	"<<point2.second<<endl;

	Pair<int, int> ob1;
	cout<<ob1.first<<"\	"<<ob1.second<<endl;
	
	Pair<int, float> ob2(123);
	cout<<ob2.first<<"\	"<<ob2.second<<endl;

	_getch();
	return 0;
}