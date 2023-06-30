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

    (*asif).roll = 10; // jodi kono kisu update korte chai taholeo direfference korte hoy (dynamic object er khetre) ///

    cout << "Asif's Information:" << endl;
    cout << (*asif).name << endl; //first dereference asif then access the name of asif
    cout << (*asif).roll << endl;  // normal int er khetre jemon pointer ke direfference kore value access korte hoy, oi ek e system eta //
    cout << (*asif).section << endl;
    cout << (*asif).cls << endl << endl; //(*asif).cls evabe bracket na dile compiler *(asif.cls) dhore nibe tai thik moto kaj krbe na

    //Shortcut:
     asif->roll = 9;

    //arrow sign: (*asif).name = asif->name

    cout << asif->name << endl; //  jodi dynamic object hoy(orthat pointer thake jake direfference korte hoy+grp ba object hoy) taholei evabe arrow diye access kra jbe// 
    cout << asif->roll << endl;
    cout << asif->section << endl;
    cout << asif->cls << endl;




    // now we can delete it

    return 0;
}


    // int * a = new int;
    // *a =10; // dereference kre access krte hoto
    // cout << *a << endl;