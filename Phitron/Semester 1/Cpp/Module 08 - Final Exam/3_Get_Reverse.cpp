#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int cls;
    char sec;
    int math_marks;
    int eng_marks;
};

int main()
{
    int n;
    cin>> n;

    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].cls >> s[i].sec >> s[i].math_marks >> s[i].eng_marks;
    }

    reverse(s,s+n);

    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << " " << s[i].cls << " " << s[i].sec << " " << s[i].math_marks << " " << s[i].eng_marks << endl;
    }
    
     
    return 0;
}
