#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string s;
	cout<<"enter file contents\n";
	getline(cin,s);
	fstream y;
      	y.open("Text.txt",ios::app|ios::out);
	y<<s;
	y.close();
	y.open("Text.txt",ios::ate|ios::in);
	cout<<"size of file = "<<y.tellg()<<" bytes\n";
	y.close();
	return 0;
}	
