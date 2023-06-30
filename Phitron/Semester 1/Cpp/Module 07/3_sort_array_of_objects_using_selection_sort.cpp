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

        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;

        cin.ignore();
    }

    // roll er vittite sort kortesi:

    for (int i = 0; i < 2 /*(n-1)*/; i++)   // sort er jonno prothom loop (n-1) porjonto chalate hoy, ekhane jehetu 3 ase fixed value tai manually 2 porjonto deya hoise //
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (a[i].roll > a[j].roll) swap(a[i], a[j]); // Shudhu roll e na, onno je kono kisu diye e sort kora jabe //
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "Name: " << a[i].name << endl;
        cout << "Roll: " << a[i].roll << endl;
        cout << "Marks: " << a[i].marks << endl << endl;
    }

    return 0;
}

//input:
// asif abdullah
// 2
// 95
// masud abdullah
// 3
// 92
// bornil akash
// 1
// 96


//output:
// Name: bornil akash
// Roll: 1
// Marks: 96

// Name: asif abdullah
// Roll: 2
// Marks: 95

// Name: masud abdullah
// Roll: 3
// Marks: 92