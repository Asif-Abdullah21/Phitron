#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a;
    cin>>a;//2.56789
    // printf("%0.2f",a); // for c //
    cout << fixed << setprecision(2) <<  a; //2.57
    return 0;
}