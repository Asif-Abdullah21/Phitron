#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    s = "World";  // or //s.assign("World"); 
    //s.assign("World");       /// s = "World" er motoi kaj kore ///  

    string str = "HelloWorld";
    str.erase(5); // jei number ta function er moddhe dibo sei index theke pichoner sob erase hoye jbe
    cout << str << endl;



    string s1 = "HelloWorld"; 
    // s1.erase(4,1);  diye shudhu o delete korte pari then HellWorld thakto
    s1.erase(4,3);           /// 2 ta parameter ney. prothom ta holo kon index theke delete korte chai, ar porer ta holo koyta character delete korte chai ///
    cout << s1 << endl;       /// Hellrld ///



    s1 = "HelloWorld";
    s1.replace(4,3,"PK");      /// erase + replace kore. Pothom 2 ta parameter diye erase function er moto same kaj kora hoy. Ar 3rd parameter e bole dite hoy je kon string ta diye replace korte chai ///    
   // s1.replace(5,0,"PK");  // HelloPKWorld
    cout << s1 << endl;          /// HellPKrld ///


    s1 = "HelloWorld";
    s1.insert(5,"Asif");        /// first parameter e je number deya ho, oi index theke insert kore ///  
    cout << s1 << endl;          /// HelloAsifWorld ///
    

    string str1 = "HelloWorld";
    int val = str1.find("World"); // jei index a pabe tar index return krbe r na pele -1 return krbe
    cout << val << endl;          //evabe substring check kra jay

    return 0;
}