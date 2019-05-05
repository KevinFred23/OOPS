#include <iostream>
using namespace std;
class A
{
	public:
		A() { cout << "class A constructor called" << endl; }~A() { cout << "class A destructor called" << endl; }
};
class B: public A
{
	public:
		B() { cout << "class B constructor called" << endl; }
		~B() { cout << "class B destructor called" << endl; }
};
class C
{
	public:
		C() { cout << "class C constructor called" << endl;}
		~C() { cout << "class C destructor called" << endl;}
};
class D : public B, public C
{
	public:
		D() { cout << "class D constructor called" << endl;}
		~D() { cout << "class D destructor called" << endl;}
};
int main()
{
	cout << "Constructor destructor call for class A: " << endl;
	{ A a; }
	cout << "Constructor destructor call for class B: " << endl;
	{ B a; }
	cout << "Constructor destructor call for class C: " << endl;
	{ C a; }
	cout << "Constructor destructor call for class D: " << endl;
	{ D a; }
	return 0;
}
