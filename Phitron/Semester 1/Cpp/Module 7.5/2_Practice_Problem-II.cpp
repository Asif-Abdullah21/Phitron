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
    int n;
    cin >> n;

    Student s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name;
        cin >> s[i].roll >> s[i].marks;
        cin.ignore();
    }

    reverse(s,s+n);
    
    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << " " << s[i].roll << " "<< s[i].marks << endl;
    }
     
    return 0;
}

//--------------------------------------------------------------------------------------------------------


// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
//     public:
//     string name;
//     int roll;
//     int marks;
// };

// int main()
// {
//     int n;
//     cin >> n;

//     Student s[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> s[i].name;
//         cin >> s[i].roll >> s[i].marks;
//         cin.ignore();
//     }
    
//     Student temp;
//     for (int i = 0,j=n-1; i < j; i++,j--)
//     {
//         temp = s[j];
//         s[j] = s[i];
//         s[i] = temp;
//     }

    
//     for (int i = 0; i < n; i++)
//     {
//         cout << s[i].name << " " << s[i].roll << " "<< s[i].marks << endl;
//     }
     
//     return 0;
// }