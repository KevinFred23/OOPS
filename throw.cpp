#include <iostream>
using namespace std;

void divide(int a, int b)
{
	try
	{
		if(b==0)
			throw b;
		if(b==1)
			throw 'a';
		if(b==2)
			throw 1.1;
		cout<<"result = "<< (float)a/b<<endl;
	}
	catch(int b)
	{
		cout<<"Denominator is zero\n";
		throw b;
	}

}

int main()
{
	int a,b;
	try
	{
		cout<<"enter a and b\n";
		cin>>a>>b;
		divide(a,b);
	}
	catch(int b)
	{
		cout<<"integer exception caught\n";
	}
	catch(char c)
	{
		cout<<"character exception caught\n";
	}
	catch(double f)
	{
		cout<<"double exception caught\n";
	}
	return 0;
}



