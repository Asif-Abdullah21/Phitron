#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;

    Person(string nm, int a,int m1,int m2)
    {
        name = nm;
        age = a;
        marks1 = m1;
        marks2 = m2;
    }
    void display()
    {
        cout << name << " " << age << endl;
    }

    int total_marks()
    {
        return marks1+marks2;
    }
};

using namespace std;
int main()
{
    Person rahat("Rahat Khan Pathan", 25,90,95);
    //cout << rahat.name << " " << rahat.age << endl;
    rahat.display();
    cout << rahat.total_marks() << endl;
    // int total = rahat.total_marks();
    // cout << total << endl;

    return 0;
}
