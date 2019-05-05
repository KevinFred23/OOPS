#include <iostream>
#include <string>
using namespace std;

class Student
{
	protected:
	string name;
	int age;
	public:
	Student()
	{
		cout<<"enter name\n";
		cin>>name;
		cout<<"enter age\n";
		cin>>age;
	}
	virtual void getDetails()=0;
};

class Engineering : public Student
{
	string course;
	int fees;
	public:
	Engineering()
	{
		course="engineering";
		cout<<"enter fees\n";
		cin>>fees;
	}
	void getDetails()
	{
		cout<<"Name: "<<name<<"\nAge: "<<age<<"\nCourse: "<<course<<"\nFees: "<<fees<<endl<<endl;
	}
};

class Science : public Student
{
	string course;
	int fees;
	public:
	Science()
	{
		course="science";
		cout<<"enter fees\n";
		cin>>fees;
	}
	void getDetails()
	{
		cout<<"Name: "<<name<<"\nAge: "<<age<<"\nCourse: "<<course<<"\nFees: "<<fees<<endl<<endl;
	}
};

class Medical : public Student
{
	string course;
	int fees;
	public:
	Medical()
	{
		course="medical";
		cout<<"enter fees\n";
		cin>>fees;
	}
	void getDetails()
	{
		cout<<"Name: "<<name<<"\nAge: "<<age<<"\nCourse: "<<course<<"\nFees: "<<fees<<endl<<endl;
	}
};

int main()
{
	Engineering e;
	Science s;
	Medical m;
	Student *s1[3] = {&e,&s,&m};
	for(int i=0;i<3;i++)
		s1[i]->getDetails();
	return 0;
}
