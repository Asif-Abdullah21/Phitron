#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    char name[101];
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(char n[],int r,char s,int m,int c)
    {
        strcpy(name,n);
        roll = r;
        section = s;
        math_marks = m;
        cls = c;
    }
};

int main()
{
    
    char nm1[101] = "Asif Abdullah";
    Student asif(nm1,3,'B',95,8);

    char nm2[101] = "Masud Abdullah";
    Student masud(nm2,2,'B',97,8);

    char nm3[101] = "Anisul Islam"; 
    Student anis(nm3,4,'B',93,8); 

    if(masud.math_marks > asif.math_marks && masud.math_marks>anis.math_marks)
    {
        cout << "Highest mark: "<< masud.math_marks << endl;
        cout << masud.name << endl;
    }  

    else if(asif.math_marks>anis.math_marks)
    {
        cout << "Highest mark: "<< asif.math_marks << endl;
        cout << asif.name << endl;
    }

    else{
        cout << "Highest mark: "<< anis.math_marks << endl;
        cout << anis.name << endl;
    }  
     
    return 0;
}
