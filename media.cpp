#include<iostream>
using namespace std;

class MEDIA {
public:
    float price;
    string title;
    MEDIA(float p, string t){
        price = p;
        title = t;
    }
    virtual void mediaData()=0;
    void display(){
        cout << "**********\n";
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class Tapes: public MEDIA {
    int play_time;
public:
    Tapes(float p, string t): MEDIA(p,t){
        mediaData();
    }
    void mediaData(){
        cout << "Enter play time: ";
        cin >> play_time;
    }
    void display1(){
        display();
        cout << "Play time: " << play_time <<"minutes"<< endl;
    }
};

class Books: public MEDIA {
    int pages;
public:
    Books(float p, string t): MEDIA(p,t){
        mediaData();
    }
    void mediaData(){
        cout << "Enter pages: ";
        cin >> pages;
    }
    void display1(){
        display();
        cout << "Pages: " << pages << endl;
    }
};

main(){
    float price;
    string title;

    cout << "Enter book title: ";
    getline(cin,title);
    cout << "Enter book price: ";
    cin >> price;
    Books book1(price, title);

    cout << "Enter tape title: ";
    cin >> title;
    cout << "Enter tape price: ";
    cin >> price;
    Tapes tape1(price, title);

    book1.display1();
    tape1.display1();
}

