#include <iostream>
using namespace std;
class Complex
{
	float re,im;
	public:
	Complex(float a,float b);
	Complex (const Complex& a);
	void print();
	friend void addc (Complex a, Complex b);
	friend void multc (Complex a, Complex b);
};
Complex :: Complex (float a=0, float b=0): re(a),im(b){}
Complex :: Complex (const Complex& a){ re=a.re; im=a.im; }
void Complex :: print() { cout <<" ("<< re << "+" << im << "i) "; }
void addc (Complex a, Complex b){
	Complex c;
	c.re = a.re+b.re;
	c.im=a.im+b.im;
	cout << "= ";
	c.print();
}
void multc (Complex a,Complex b)
{
	Complex c;
	c.re = (a.re*b.re)-(a.im*b.im);
	c.im = (a.re*b.im)+(b.re*a.im);
	cout << "= ";
	c.print();
}
int main()
{ float i,j;
	cout << "Enter first complex number" << endl;
	cin>>i>>j;
	Complex a(i,j);
	cout << "Enter second complex number" << endl;
	cin >> i >> j;
	cout<<endl;
	Complex b(i,j);
	a.print();
	cout<<"+";
	b.print();
	addc (a,b);
	cout<<endl;
	a.print();
	cout<<"*";
	b.print();
	multc (a,b);
	return 0;
}
