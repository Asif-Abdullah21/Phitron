#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int cls;
    char sec;
    int id;
    int math_marks;
    int eng_marks;
};

// bool cmp(Student a,Student b)
// {
//     if(a.math_marks+a.eng_marks==b.math_marks+b.eng_marks)
//     {
//         return a.id<b.id;
//     }
//     return a.math_marks+a.eng_marks>b.math_marks+b.eng_marks;
// }

bool cmp(Student a,Student b)
{
    if(a.math_marks+a.eng_marks==b.math_marks+b.eng_marks)
    {
        if(a.id<b.id) return true;
        else return false
    }
    return a.math_marks+a.eng_marks>b.math_marks+b.eng_marks;
}

int main()
{
    int n;
    cin>> n;

    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].cls >> s[i].sec >> s[i].id >> s[i].math_marks >> s[i].eng_marks;
    }

    sort(s,s+n,cmp);

    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << " " << s[i].cls << " " << s[i].sec << " " << s[i].id << " " << s[i].math_marks << " " <<s[i].eng_marks << endl;
    }
    
     
    return 0;
}
