#include <bits/stdc++.h>
using namespace std;
int main()
{
    //1
    //string s = "Asif Abdullah";  

    //2
    //string s("Asif Abdullah"); // works like a constructor


    //3
    string s("Asif Abdullah",4); // koto gula character dekhte chacchi second parameter a seta bole dite hbe
    cout << s << endl; //Asif
    
    //4
    string s1 = "Asif Abdullah"; // evabe onno ekta string er variable a rekhe nicher kaj krle
    string s2(s1,5);            // second parameter a bole dite hobe samne theke kotogulo char baad dite cacchi
    cout << s2 << endl; //Abdullah

    //5
    string s3(26,'A'); // joto gula character chacchi ta first parameter a bole dibo, second parameter a string a jei char rakhte chacchi ta bolbo
    cout << s3 << endl;
     
    return 0;
}
