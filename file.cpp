#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream y,x;
    string s;
    int count=0;
    int pos[5][10]={0};
    int vowel_count[5]={0};
    char vowel[5]={'A','E','I','O','U'};
    cout<<"enter string\n";
    getline(cin,s);
    y.open("project.txt",ios::out);
    y<<s;
    y.close();
    y.open("project.txt",ios::in);
    y>>noskipws;
    while(!y.eof())
    {
        char c;
        y>>c;
        count++;
        if(c=='A'||c=='a')   pos[0][vowel_count[0]++]=count;
        else if(c=='E'||c=='e')pos[1][vowel_count[1]++]=count;
        else if(c=='I'||c=='i')pos[2][vowel_count[2]++]=count;
        else if(c=='O'||c=='o') pos[3][vowel_count[3]++]=count;
        else if(c=='U'||c=='u')  pos[4][vowel_count[4]++]=count;
    }
    x.open("Position.txt",ios::out);
    x<<"Vowel\tCount\tPosition\n";
    for(int i=0;i<5;i++)
    {
        x<<vowel[i]<<"\t"<<vowel_count[i]<<"\t";
        for(int j=0;j<vowel_count[i];j++)
        {if(i==4) pos[i][j]--;
        	x<<pos[i][j]<<" ";
		}
        x<<"\n";
    }
}
