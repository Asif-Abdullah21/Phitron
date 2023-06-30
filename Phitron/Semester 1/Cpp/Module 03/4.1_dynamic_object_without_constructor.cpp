#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int cls;
};

int main()
{
    Student *asif = new Student;
    char nm[100] = "Asif Abdullah";
    strcpy(asif->name,nm);
    asif->cls = 8;

    cout << asif->name << endl;
    cout << asif->cls;

    return 0;
}
