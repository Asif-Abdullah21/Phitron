#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int marks;
    //array of objects nile constructor diye value pass kra jbe na
   
};

int main()
{
    Student a[3];

    for (int i = 0; i < 3; i++)
    {
        //cin >> a[i].name; space chara input nibe
        getline(cin,a[i].name);//asif abdullah //string input niye enter diye baki gula erpor input nite hbe
        cin >> a[i].roll >>  a[i].marks; // 3 91

        cin.ignore();  /// Loop chaliye input neyar somoy 2nd jon er name neyar age marks input neya hoy, jeta integer. Ejonno cin.ignore(); use kora hoise ///
    }
    
    for(int i=0; i<3; i++){
        cout << "Name:" << a[i].name << endl;
        cout << "Roll:" <<  a[i].roll << endl;
        cout << "Marks:" << a[i].marks << endl << endl;
    }
    
     
    return 0;
}



//--------------------------------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
//     public:
//     string name;
//     int roll;
//     int marks;
//     //array of objects nile constructor diye value pass kra jbe na
//     void display()
//     {
//         cout << name << " " << roll << " - " << marks << endl;
//     }
// };

// int main()
// {
//     Student a[3];

//     for (int i = 0; i < 3; i++)
//     {
//         //cin >> a[i].name; space chara input nibe
//         getline(cin,a[i].name);//asif abdullah //string input niye enter diye baki gula erpor input nite hbe
//         cin >> a[i].roll >>  a[i].marks; // 3 91
//        // a[i].marks; //91
//         cin.ignore();
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         a[i].display();
//     }
    
    
//     // for(int i=0; i<3; i++){
//     //     cout << "Nmae:" << a[i].name << endl;
//     //     cout << "Roll:" <<  a[i].roll << endl;
//     //     cout << "Marks:" << a[i].marks << endl << endl;
//     // }
    
     
//     return 0;
// }
