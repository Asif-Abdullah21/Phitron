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
    char nm1[101] = "Asif Abdullah";
    Person asif(nm1,5.4,21);

    char nm2[101] = "Anisul Islam";
    Person masud(nm2,5.2,19);

    if(asif.age > masud.age) 
    {
        cout << asif.name << endl;
    }
    else if(asif.age < masud.age) 
    {
        cout << masud.name << endl;
    }
    else{
        cout << "Both has same age\n";
    }
     
    return 0;
}





/*With dynamic object:

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
    char nm1[101] = "Asif Abdullah";
    Person* asif = new Person(nm1,5.4,21);


    char nm2[101] = "Masud Abdullah";
    Person* masud = new Person(nm2,5.2,19);

    if(asif->age > masud->age) 
    {
        cout << asif->name << endl;
    }
    else if(asif->age < masud->age) 
    {
        cout << masud->name << endl;
    }
    else{
        cout << "Both has same age\n";
    }
     
    return 0;
}

*/


// #include<bits/stdc++.h>
// using namespace std;
// class Student
// {
//     public:
//         char name[100];
//         int roll;
//         int cls;
//         char section;

//         Student(int r,int s,int c,char* n)
//         {
//             roll=r;
//             section=s;
//             cls=c;
//             strcpy(name,n);
//         }
// };
// int main()
// {
//     Student rahim(29,'A',7,"Rahim Ullah");
//     Student karim(55,'D',7,"Karim Cholimullah");

//     cout<<karim.roll<<endl;
//     cout<<rahim.roll<<endl;
//     return 0;
// }