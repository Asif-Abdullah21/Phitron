#include<iostream>
using namespace std;

int main()
{
    int val;
    cin >> val;//3

    switch(val)
    {
        case 1:
               cout << "ONE" << endl;
               break;
        case 2:
               cout << "TWO" << endl;
               break;
        case 3: //val==3 then enters intro case 3
               cout << "THREE" << endl;
               break;
        case 4:
               cout << "FOUR" << endl;
               break;
        case 5:
               cout << "FIVE" << endl;
               break;
        default:
               cout << "Didn't Match\n";
    }

    return 0;
}