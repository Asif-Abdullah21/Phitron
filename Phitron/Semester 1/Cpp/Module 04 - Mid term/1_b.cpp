#include <bits/stdc++.h>
using namespace std;

int* fun(int n)
{
    int *a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    return a;
}

int main()
{
    int n=5;

    int *a = fun(n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
     
    return 0;
}


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

     asif->roll = 9;

    //arrow sign: (*asif).name = asif->name

    cout << asif->name << endl; //  jodi dynamic object hoy(orthat pointer thake jake direfference korte hoy+grp ba object hoy) taholei evabe arrow diye access kra jbe// 
    cout << asif->roll << endl;


    return 0;
}


    



// #include<bits/stdc++.h>
// using namespace std;

// class Student                
// {
//     public:
//         char name[100];
//         int cls;
//         int roll;
//         char sec;

//         Student(int c, int r, char s, char* n){
//             cls = c; 
//             roll = r;
//             sec = s;
//             strcpy(name, n);
//         }
// };

// Student fun(){
//     char nm[100] = "Jahid Hridoy";     
//     Student jahid(7, 56, 'B', nm);

//     return jahid;                      
// }

// int main()
// {
//     Student j = fun();          // jahid ja ja return korse shob 'j' recieve korse.......'jahid' (mane same name) dileo kaj korto ---> Normal function er motoi kaj kore eta //

//     cout << j.name << endl;
//     cout << j.cls << endl;
//     cout << j.roll << endl;
//     cout << j.sec << endl;
            
//     return 0;
// }