#include <iostream>
using namespace std;
class Student
{ protected:
	string name,usn;
	int age;
	public:
	int getage () { return age;}
};
class UG: public Student
{
	int sem,fees,stip;
	public:
	void getData()
	{
		cout << "Enter name and usn" << endl;cin >> name >> usn;
		cout << "Enter age" << endl;
		cin >> age;
		cout << "Enter semester,fees & stipend" << endl;
		cin >> sem >> fees >> stip;
	}
	int getsem () { return sem; }
	void display ()
	{
		cout << "Details are:" << endl;
		cout << "Name: " << name << endl << "Age: " << age << endl << "Sem: " << sem << endl;
	}
};
class PG: public Student
{
	int sem,fees,stip;
	public:
	void getData ()
	{
		cout << "Enter name and usn" << endl;
		cin >> name >> usn;
		cout << "Enter age" << endl;
		cin >> age;
		cout << "Enter semester,fees & stipend" << endl;
		cin >> sem >> fees >> stip;
	}
	int getsem () { return sem;}
	void display ()
	{
		cout << "Details are:" << endl;
		cout << "Name: " << name << endl << "Age: " << age << endl << "Sem: " << sem << endl;
	}
};
int main()
{
	UG ug[20];
	PG pg[20];
	int i,n,m;
	float average;
	cout<<"\nEnter the no. of entries in the ugstudent class:";
	cin>>n;for(i=0;i<n;i++)
		ug[i].getData();
	cout << "UG Student details:" << endl;
	cout << "-------------------" << endl;
	for (i=0;i<n;i++)
		ug[i].display();
	for(int sem=1;sem<=8;sem++)
	{
		float sum=0;
		int found=0,count=0;
		for(i=0;i<n;i++)
		{
			if(ug[i].getsem()==sem)
			{
				sum=sum+ug[i].getage();
				found=1;
				count++;
			}
		}
		if(found==1)
		{
			average=sum/count;
			cout<<"\nAverage of age of sem "<<sem<<" is "<<average;
		}
	}
	cout<<"\nEnter the no. of entries of pgstudent class:";
	cin>>n;
	for(i=0;i<n;i++)
		pg[i].getData();
	cout << "PG Student details:" << endl;
	cout << "-------------------" << endl;
	for (i=0;i<n;i++)
		ug[i].display();
	for(int sem=1;sem<=8;sem++)
	{
		float sum=0;
		int found=0,count=0;
		for(i=0;i<n;i++)
		{
			if(pg[i].getsem()==sem)
			{
				sum=sum+pg[i].getage();found=1;
				count++;
			}
		}
		if(found==1)
		{
			average=sum/count;
			cout<<"\nAverage of age of sem "<<sem<<" is "<<average;
		}
	}
	return 0;
}
