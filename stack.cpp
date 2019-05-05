#include <iostream>
using namespace std;

class Stack
{
	int *a;
	int n;
	int top;
	public:
	Stack(int n1=0):n(n1)
	{
		top=-1;
		a = new int[n];
	}
	int pop()
	{
		//try
		//{
			if(top<0)
				throw top;
			return a[top--];
		//}
	}

	void push(int elem)
	{
		//try
		//{
			if(top==n-1)
				throw top;
			a[++top]=elem;
		//}
	}

	void display()
	{
		cout<<"Stack contents\n";
		for(int i=top;i>=0;i--)
			cout<<a[i]<<endl;
	}
};

int main()
{
	int elem, ch;
	cout<<"enter stack size\n";
	cin>>ch;
	Stack s(ch);
	while(1)
	{
		cout<<"1.push\n2.pop\n3.display\n4.exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				try
				{
					cout<<"enter element\n";
					cin>>elem;
					s.push(elem);
				}
				catch(int top)
				{
					cout<<"stack full\n";
				}
				break;
			case 2:
				try
				{
					elem = s.pop();
					cout<<"element popped = "<<elem<<endl;
				}
				catch(int top)
				{
					cout<<"stack empty\n";
				}
				break;
			case 3: s.display();
				break;
			case 4: exit(0);
			default:cout<<"invalid choice\n";
		}
	}
}
