#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;
    
    Person(string name, int age)
    {
        this->name = name; // (*this).name ar this->name ek e kotha //
        this->age = age;   // (*this).age ar this->name ek e kotha //
    }

};

int main()
{
    Person rakib("Rakib Hasan",24);
    cout << rakib.name << " " << rakib.age << endl;
     
    return 0;
}
