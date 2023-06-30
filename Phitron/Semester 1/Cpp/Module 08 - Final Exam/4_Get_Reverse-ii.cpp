#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int cls;
    char sec;
    int id;
};

int main()
{
    int n;
    cin>> n;

    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].cls >> s[i].sec >> s[i].id;
    }

    for (int i = 0,j=n-1; i < j; i++,j--)
    {
        swap(s[i].id,s[j].id);
    }
    

    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << " " << s[i].cls << " " << s[i].sec << " " << s[i].id << endl;
    }
    
     
    return 0;
}
