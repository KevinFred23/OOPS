#include <iostream>
using namespace std;
class Person
{
	protected:
		string name;
		int age;
	public:
		Person ()
		{
			cout << "Enter name and age" << endl;
			cin >> name >> age;
		}
		void display()
		{
			cout << "Name : " << name << endl;
			cout << "Age : " << age <<
				endl;
		}
};
class Teacher : public Person
{
	int publ;
	public:
	Teacher ()
	{
		cout << "Enter number of publications " << endl;cin >> publ;
	}
	void display1 ()
	{
		Person :: display();
		cout << "Number of publications: " << publ << endl;
	}
};
class Student : public Person
{
	protected:
		string usn;
		int m1,m2,m3;
	public:
		Student ()
		{
			cout << "Enter usn" << endl;
			cin >> usn;
			cout << "Enter marks obtained in three subjects out of 50" << endl;
			cin >> m1 >> m2 >> m3;
		}
		void display2()
		{
			Person :: display();
			cout << "USN: " << usn << endl;
			cout << "Marks: " << endl;
			cout << "Subject 1:" << m1 << "/50" << endl;
			cout << "Subject 2:" << m2 << "/50" << endl;
			cout << "Subject 3:" << m3 << "/50" << endl;
		}
};
class Marks : public Student
{
	public:
		void getAverage ()
		{
			float av;
			av = (m1+m2+m3)/3.0;
			cout << "Average marks scored are " << av << endl;
		}

		void getPercent()
		{
			cout<<"percentage obtained: "<<((m1+m2+m3)*100.0)/150<<"%"<<endl;
		}
			
		
};
int main()
{
	int m,n,i;
	cout << "Enter number of teachers " << endl;
	cin >> m;
	cout << "Enter number of students " << endl;
	cin >> n;
	cout << "Enter Teacher details " << endl;
	Teacher a[m];
	cout <<"Enter Student details " << endl;
	Marks b[n];
	cout << "Teacher details are: " << endl;
	for (i=0;i<m;i++)
	{
		a[i].display1();
	}
	cout << "Student details are: " << endl;
	for (i=0;i<n;i++)
	{
		b[i].display2();
		b[i].getPercent();
		b[i].getAverage();
	}
	return 0;
}
