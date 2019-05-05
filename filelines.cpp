#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	int count=0;
	char c;
	string s;
	cout<<"enter file contents\n";
	getline(cin,s);
	fstream y;
	y.open("Lines.txt",ios::app|ios::out);
	y<<s;
	y.close();
	y.open("Lines.txt",ios::in);
	while(!y.eof())
	{
		y>>c;
		if(c=='.'||c=='?'||c=='!')
			count++;
	}	
	cout<<"no. of lines in file = " <<count-1<<endl;
	y.close();
	return 0;
}

