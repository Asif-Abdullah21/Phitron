#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; //if n%2 == 0 then n is even else odd where n%2 == 1
    switch (n % 2)
    {
    case 0:
        cout << "EVEN\n";
        break;
    default:
        cout << "ODD\n";
    }
    return 0;
}