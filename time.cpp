#include <iostream>
#include<iomanip>
using namespace std;class Time
{
	int h,m,s;
	public:
	Time ();
	void readtime();
	void addtime (Time a, Time b);
	void printtime();
};
Time :: Time () : h(0),m(0),s(0) {}
void Time :: readtime ()
{
	cout << "Enter hours,minutes and seconds respectively" << endl;
	cin >> h >> m >> s;
}
void Time :: addtime (Time a, Time b)
{
	s=a.s+b.s;
	m = a.m + b.m + (s/60);
	h=a.h+b.h+(m/60);
	m=m%60;
	s=s%60;
}
void Time :: printtime()
{
	cout << setw (2) << setfill ('0') << h << ":"
		<< setw(2) << setfill('0') << m << ":"
		<< setw(2) << setfill('0') << s << endl;
}
int main ()
{
	Time a,b,c;
	a.readtime();
	b.readtime();
	a.printtime();
	b.printtime();
	c.addtime (a,b);
	cout << "Sum is" << endl;
	c.printtime();
	return 0;
}
