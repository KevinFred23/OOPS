#include <iostream>
using namespace std;
class Box
{ static int x;
	float l,b,h;
	public:
	Box()
	{ x++;
		cout << "Enter length, breadth and height" << endl;
		cin >> l >> b >> h;
		cout<<endl;
	}
	void display()
	{
		cout << "Dimensions: " << endl;
		cout << l << "\t" << b << "\t" << h << endl;
	}
	void getVolume()
	{
		float V;
		V=l*b*h;
		cout << "Volume is " << V << endl;
	}
	static void getCount()
	{
		cout << "Number of boxes " << x << endl;
	}
};int Box:: x = 0;
int main()
{
	int n;
	cout<<"Enter number of boxes\n";
	cin>>n;
	Box *a=new Box [n];
	for(int i=0;i<n;i++)
	{
	a[i].display();
	a[i].getVolume();
	}
	Box::getCount();
	delete [] a;
	return 0;
}
