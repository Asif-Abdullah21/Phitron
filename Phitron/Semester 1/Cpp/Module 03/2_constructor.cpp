#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[101];
    int roll;
    int cls;
    char section;
    Student(char *nm, int r, int c, char s) //or  Student(char nm[],int r,int c,int s)  /// ekhane "Student" holo constructor ///
    {                                       // constructor er name same cls er name,r er kono return type nei, object declare er sathe automatically call hoy
        strcpy(name, nm);
        roll = r;
        cls = c;
        section = s;
    }
};

int main()
{
    Student asif("Asif Abdullah", 18, 8, 'B'); /// evabe likhle direct constructor call hoy ar values pass hoye jay ///
    Student masud("Masud Abdullah", 15, 8, 'B');

    // Printing:

    cout << "Asif's Information:" << endl;
    cout << asif.name << endl;
    cout << asif.roll << endl;
    cout << asif.section << endl;
    cout << asif.cls << endl << endl;

    cout << "Masud's Information:" << endl;
    cout << masud.name << endl;
    cout << masud.roll << endl;
    cout << masud.section << endl;
    cout << masud.cls << endl;

    return 0;
}


/*
    /// CONSTRUCTOR ///
    
    => Special type er function jar return type thake na
    => class er name ei constructor er name hoy
    => Automatic call hoy 
    
*/