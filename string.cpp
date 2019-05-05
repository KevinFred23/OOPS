#include <iostream>
using namespace std;
class String
{
	string s;
	public:String (){}
	       String (string a) : s(a) {}
	       void read () { cout << "Enter string" << endl; getline(cin,s); }
	       void print () { cout << s << endl; }
	       String (String& a) { s=a.s; }
	       void join(String a) {s = s + a.s;}
};
int main()
{
	string s;
	String a;
	a.read();
	String b("Hello");
	a.print();
	b.print();
	cout << "Concatenated string is" << endl;
	String c(b);
	c.join(a);
	c.print();
	return 0;
}
