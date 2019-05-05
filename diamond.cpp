#include <iostream>
using namespace std;

class A
{
	protected:
	int x;
	public:
	A(int x1=0):x(x1){cout<<"A constructor\n";}
};

class B: virtual public A
{
	protected:
	int y;
	public:
	B(int y1=0):y(y1){cout<<"B constructor\n";}

};

class C: virtual public A
{
	protected:
	int z;
	public:
	C(int z1=0):z(z1){cout<<"C constructor\n";}
};

class D: public B, public C
{
	public:
	D(int x1,int y1,int z1):A(x1),B(y1),C(z1){cout<<"D constructor\n";}
	void print()
	{
		cout<<"values\n"<<x<<" "<<y<<" "<<z<<endl;
	}
};

int main()
{
	int x,y,z;
	cout<<"enter 3 nos.\n";
	cin>>x>>y>>z;
	D d(x,y,z);
	d.print();
	return 0;
}
