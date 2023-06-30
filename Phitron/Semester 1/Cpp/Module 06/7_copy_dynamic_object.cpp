#include <bits/stdc++.h>
using namespace std;

class Person
{
    public:
    string name;
    int age;
    Person(string nm,int a)
    {
        name = nm;
        age = a;
    }
};
int main()
{
    Person *asif = new Person("Asif Abdullah",22);
    Person *masud = new Person("Masud Abdullah",21);
    
  //  masud = asif; //asif er ghorta masud er moddhe copy na kre boltesei, masuder pointer ta asif er dike krte
    // tai evabe krle masuder maddhome asif er value paua jbe but asif delete kre dile r masud paua jabe na
    // masud->name = asif->name;
    // masud->age = asif->age;
    
    *masud = *asif;  // asif er pura object tule masud a copy kora hocche // tai asif delete krleu masud er moddhe theke jaua asif er value gulo masud k diye access krte parbo
    delete asif;

    cout << masud->name << " " <<masud->age << endl; // dynamic object, tai -> diye access korte hoy //


     
    return 0;
}
