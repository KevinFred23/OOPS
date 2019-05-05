#include <iostream>
#include<fstream>
using namespace std;

class Student
{
    char name[20];
    int roll,m1,m2,m3,total;
    char grade;
    public:
    void insertintofile()
    {
        fstream y;
        y.open("Student.dat",ios::app|ios::binary|ios::out);
        y.write((char *)&name,sizeof(name));
        y.write((char *)&roll, sizeof(roll));
        y.write((char *)&m1, sizeof(m1));
        y.write((char *)&m2, sizeof(m2));
        y.write((char *)&m3, sizeof(m3));
        y.write((char *)&grade, sizeof(grade));
    }
    void readdata()
    {
        cout<<"enter name\n";
        cin>>name;
        cout<<"enter roll no\n";
        cin>>roll;
        cout<<"enter 3 subject marks\n";
        cin>>m1>>m2>>m3;
        total=m1+m2+m3;
        if(total>=270)
            grade='S';
        else if(total>=240)
            grade='A';
        else if(total>=210)
            grade='C';
        else if(total>=180)
            grade='D';
        insertintofile();
    }

    void writedata()
    {
        fstream y;
        y.open("Student.txt",ios::binary|ios::in);
	while(!y.eof())
	{
        y.read((char *)&name,sizeof(name));
        y.read((char *)&roll, sizeof(roll));
        y.read((char *)&m1, sizeof(m1));
        y.read((char *)&m2, sizeof(m2));
        y.read((char *)&m3, sizeof(m3));
        y.read((char *)&grade, sizeof(grade));
        cout<<"Name: "<<name<<"\nRoll. No: "<<roll<<"\nMarks1: "<<m1<<"\nMarks2: "<<m2<<"\nMarks3: "<<m3<<"\nGrade: "<<grade<<endl;
    }}
};

int main()
{
    Student s[2];
    for(int i=0;i<2;i++)
    {
        s[i].readdata();
    }
    Student pb;
    pb.writedata();
    return 0;
}
