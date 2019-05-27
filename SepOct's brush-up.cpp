

/*
class A
{
public:
	A(){cout<<"Def cons, this = "<<this<<endl;}
	A(const A &ref){cout<<"CC\n";}
	~A(){cout<<"Des, this = "<<this<<endl;}

	A func(){ return A(); }
};

A f1(){ return A(); }

int main()
{
	{
	const A &r1 = f1();
	const A &r2 = A();
	}

	{
	const A &r3 = A().func();
	const A &r4 = f1().func();
	}
	_getch();
}*/


/*
struct X
{
	X(){cout<<"Def cons, this = "<<this<<endl;}
	X(const X &ref){cout<<"CC\n";}
	~X(){cout<<"Des, this = "<<this<<endl;}

	X& ref(){ return *this; }
};

X getX(){ return X(); }

void g(X &x){cout<<"Inside g()\n";}

int main()
{
	const X &x = getX();
	
	X &x1 = getX();
	g(getX());

	X &x2 = getX().ref();
	g(getX().ref());
	

	_getch();
	return 0;
}
*/


/*
class A{};

int main()
{
	A &ref = A();
	const A &ref1 = A();

	int &ri = int();
	const int &ri1 = int();
}

*/

/*
class Thing
{
public:
	Thing(){cout<<"Def cons, this = "<<this<<endl;}
	Thing(const Thing &ref){cout<<"CC\n";}
	~Thing(){cout<<"Des, this = "<<this<<endl;}
};

int main()
{
	cout<<"Add: "<<&Thing()<<"\n\n";;

	Thing &a = Thing();
	cout<<"Add: "<<&a<<"\n\n";

	const Thing &b = Thing();
	cout<<"Add: "<<&b<<"\n\n";

	Thing *tp = &Thing();
	cout<<"Add: "<<tp<<"\n\n";;

	const Thing *tp1 = &Thing();
	cout<<"Add: "<<tp1<<"\n\n";;

	_getch();
	return 0;
}
*/

/*
class Thing
{
public:
	Thing(){cout<<"Def cons, this = "<<this<<endl;}

	Thing(char c){cout<<"NC, this = "<<this<<endl;}

	Thing(const Thing &ref){cout<<"CC\n";}
	~Thing(){cout<<"Des, this = "<<this<<endl;}
};

int main()
{
	Thing ob('H');
	Thing ob1 = Thing('K');
	Thing ob2 = 'U';

	_getch();
	return 0;
}*/


//Important example.
/*
class A
{
public:
	A(){cout<<"DC, this = "<<this<<endl;}
	~A(){cout<<"Des, this = "<<this<<endl;}
};

int f1(A &ref)
{
	cout<<"Inside f1\n";
	A a;						// In the meanwhile when f1 returns, this  local object a is destroyed but ref is not, instead the control transfers to f2. And when f2 has returned then this a is destroted.
	return 3;
}

void f2(int a)
{
	cout<<"Inside f2\n";
}

int main()
{
	f2(f1(A()));	//U'll come 2 know how these nested functions are behaving.

	_getch();
	return 0;
}*/