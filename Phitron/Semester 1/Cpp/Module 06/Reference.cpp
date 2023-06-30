#include <bits/stdc++.h>
using namespace std;

// Refeerencing //

// Ekhane user defined function er moddhe string pathaile main er string er kono change hoy na. 
//user defined function e string& diye reciece korte hoy,mane s er adress ta pathay dite hoy, tahole change hobe //


void print(string &s)
{
    s = "world";
}

int main()
{
    string s= "hello";

    print(s);

    cout << s << endl;
     
    return 0;
}
