#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int marks;
   
};


int main()
{
    Student a[3];

    for (int i = 0; i < 3; i++)
    {
        getline(cin,a[i].name);
        cin >> a[i].roll;
        cin >> a[i].marks;
        cin.ignore();
    }

    Student mx; // new object toiri krlam
    mx.marks = INT_MIN;

    for (int i = 0; i < 3; i++)
    {
        if(a[i].marks>mx.marks)
        {
            mx = a[i]; /// Jehetu 2 tai static object, tai ei normal vabei copy kora jay ///
        }
    }
    
    cout << "Max Info:\n" << "Name: "  << mx.name << endl << "Roll: " << mx.roll << endl << "Marks: " << mx.marks << endl << endl;
    
    Student mn;
    mn.marks = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        if(a[i].marks<mn.marks)
        {
            mn = a[i];
        }
    }

     cout << "Min Info:\n" << "Name: "  << mn.name << endl << "Roll: " << mn.roll << endl << "Marks: " << mn.marks << endl;
    

    return 0;
}

//input:

// asif abdullah
// 1 
// 90
// masud abdullah
// 2
// 95
// bornil akash
// 3
// 89

//output:

// Max Info:
// Name: masud abdullah
// Roll: 2
// Marks: 95

// Min Info:
// Name: bornil akash
// Roll: 3
// Marks: 89