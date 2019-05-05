#include<iostream>
#include<iomanip>
using namespace std;
class Employee
{
	string name, emp_id;
	int basic,da,it,net_sal;
	public:Employee();
	       void print();
	       void netsal();
};
Employee :: Employee()
{
	cout << "Enter employee name & id" << endl;
	cin >> name >> emp_id;
	cout << "Enter basic salary" << endl;
	cin >> basic ;
	da = 0.52*basic;
	it = 0.3*1.52*basic;
}
void Employee :: print ()
{
	cout << "Employee details are: " << endl;
	cout << "Name: " << name << endl;
	cout << "ID: " << emp_id << endl;
	cout << "Basic salary: " << basic << endl;
	cout << "DA: " << da << endl;
	cout << "IT: " << it << endl;
        cout << "Net salary: " << net_sal<<endl;
}
void Employee :: netsal ()
{
	int gross;
	gross = basic + da;
	net_sal = gross - it;
}
int main()
{
	int i,n;
	cout << "Enter number of employees" << endl;
	cin >> n;
	Employee a[n];
	for (i=0;i<n;i++)
	{
		a[i].netsal();
		a[i].print();}
	return 0;
}
