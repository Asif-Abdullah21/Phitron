#include <bits/stdc++.h>
using namespace std;

void print(stringstream & ss) // jodi chai just copy akare na jak tahole evebae & reference diye dite hbe,ekhn ekhance change krle s er o change hbe
{                            // stringstream e & obosshoi dite hoy recieve korar somoy, naile kaj kore na ///
    
    string word;
    if(ss>>word)
    {
        print(ss);    // evabe reverse order a word gula print hoy, jehetu age function call r pore cout
        cout << word << endl;
    }

    /*
    string word;
    if(ss>>word)
    {
        cout << word << endl;
        print(ss);
    }

     /// Evabe dile shoja print hobe ///
        // cout << word << " ";
        // print(ss);
    */
}

int main()
{
    string s;
    getline(cin,s);

    //stringstream ss(s);
    stringstream ss;
    ss << s;

    print(ss);
    
    
    return 0;
}

// Normally word alada alada ber kora //
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);

    stringstream ss(str);
    string word;
    //stringstream ss;
   // ss << str;

    while(ss >> word){
        cout << word << endl;
    }

    
    return 0;
}
*/

// ---------------------------------------------------------------------- //

// Refeerencing //

// Ekhane user defined function er moddhe string pathaile main er string er kono change hoy na. 
//user defined function e string& diye reciece korte hoy,mane s er adress ta pathay dite hoy, tahole change hobe //
/*
#include<bits/stdc++.h>
using namespace std;

void print(string& s){
    s = "World";
}

int main()
{
    string s = "Hello";
    print(s);

    cout << s << endl;

    return 0;
}
*/