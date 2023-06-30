#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[101];
    int roll;
    int cls;
    char section;
    Student(char *n,int r,int c,int s)
    {
        strcpy(name,n);
        roll = r;
        cls = c;
        section = s;
    }
};

int main()
{
    char nm[101] = "Asif Abdullah";
    Student* asif = new Student(nm,18,8,'B'); //dynamic object creation

    
    cout << "Asif's Information:" << endl;
    cout << asif->name << endl;
    cout << asif->roll << endl;
    cout << asif->section << endl;
    cout << asif->cls << endl;

    // now we can delete it

    return 0;
}
