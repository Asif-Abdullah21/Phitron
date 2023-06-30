#include <bits/stdc++.h>
using namespace std;

void fun(int * &p) // reference dhore rakhar karone p alada kore notun ghor toiri krbe na, p ta ptr e thakbe orthar p er adress ptr er adress e thakbe
{
    cout << p << endl; //0x61ff0c // ekhon ekhane a change krle main er ptr o change hoye jbe jehetu reference dhore rakhsi (& chinno diye), ekhn p r ptr duitar e adress same
    p = NULL; 
}

// void fun1(int * p)
// {
//     cout << &p << endl; //0x61fef0 // reference dhore rakhi nai tai p r ptr er adress vinno ekhn p te change krle ptr a change hbe na
// }

int main()
{
    int val = 10;

    int * ptr = &val;

    cout << ptr << endl; //0x61ff0c

    fun(ptr); 
   // fun1(ptr); 

    cout << val << " " << ptr << endl;  //10 0
      
    return 0;
}



//-------------------------------------------------------------------------------------



// #include <bits/stdc++.h>
// using namespace std;

// void fun(int * p)
// {
//     //*p = 20;
//     p = NULL; //shudhu pointer p er value e change kre null kortesi, ekhane jehetu p pointer er adress vinno r derefference kore change kora hocche na tai onno gulay kono effect porbe na
//     // p = val er adress chilo ekhon p = NULL;
// }

// int main()
// {
//     int val = 10;

//     int * ptr = &val;

//     fun(ptr); //fun(&val); same

//     cout << val << endl << *ptr << endl;
      
//     return 0;
// }















/*

from muhammad_sayem:


// #include<bits/stdc++.h>
// using namespace std;

// void fun(int* p){
//     *p = 20;
// } 

// int main()
// {
//     int val = 10;

//     int* ptr = &val;

//     fun(&val);      // fun(ptr) likhleo kaj korbe. karon int* ptr er moddhe val er address mane '&val' e ase //
    
//     cout << val << endl;        // 20. karon fun function er moddhe val er address pass kora hoise ar fun function er moddhe *p er maddhome sheta recieve kore derefference kore value change kora hoise. Tai main function er moddheo val er value change hoye gese //

//     return 0;
// }

// ---------------------------------------------------------------------- //

// #include<bits/stdc++.h>
// using namespace std;

// void fun(int* p){
//     p = NULL;               // Derefference na kore shudhu Null kore deya hoise. Tai main function e val er value change hobe na //
// } 

// int main()
// {
//     int val = 10;

//     int* ptr = &val;

//     fun(ptr);      // fun(&val) likhleo kaj korbe. karon int* ptr er moddhe val er address mane '&val' e ase //
    
//     cout << val << endl;        // 10 //

//     return 0;
// }


// ----------------------------------------------------------------------- //

#include<bits/stdc++.h>
using namespace std;

void fun(int* &p){
    cout << &p << endl;     // 0x61ff08 //
} 

int main()
{
    int val = 10;

    int* ptr = &val;

    fun(ptr);      // fun(&val) likhleo kaj korbe. karon int* ptr er moddhe val er address mane '&val' e ase //
    
    cout << &ptr << endl;        // 0x61ff08 //

    return 0;
}


    Ekhane duitar address same hoise karon fun(int* &p) diye recieve korar karone oita ar alada kono pointer create kore na. 
    *p ar *ptr ek e hoye jay 


*/