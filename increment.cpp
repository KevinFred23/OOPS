#include <iostream>
using namespace std;
class A
{int x;
	public:
		A(int y);
		A(const A &b);
		int get();
		const A operator ++();
		const A operator ++(int);
		friend ostream& operator<<(ostream& y,const A& a);
};
A :: A(int y=0):x(y) {}

A :: A(const A &b):x(b.x) {}
int A :: get ()
{
	return x;
}
const A A :: operator ++()
{
	A b(++x);
	return b;
}
const A A :: operator ++(int)
{
	A b(x);
	x++;
	return b;
}

ostream& operator<<(ostream& y,const A& a)
{
	y<<a.x;
	return y;
}
int main()
{
	int x;
	cout<<"enter x\n";
	cin>>x;
	A a(x);
	cout<<"a = "<<a<<"\na++ = "<<a++<<"\n++a = "<<++a<<endl; 
	return 0;
}
