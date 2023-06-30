#include <bits/stdc++.h>
using namespace std;

class Person
{
    public:
    char name[101];
    float height;
    int age;

    Person(char *n,float h,int a)
    {
        strcpy(name,n);
        height = h;
        age = a;
    }
};

int main()
{
    char nm[101] = "Asif Abdullah";
    Person* asif = new Person(nm,5.4,21);

    cout << "Asif's Information:\n";
    cout << asif->name << endl;
    cout << asif->height << endl;
    cout << asif->age << endl;
     
    return 0;
}
