#include<bits/stdc++.h>
using namespace std;

class Student                
{
    public:
        char name[100];
        int cls;
        int roll;
        char sec;
    Student(char *n,int c,int r,char s)
    {
        strcpy(name,n);
        cls = c;
        roll = r;
        sec = s;
    }

        
};

Student fun()
{
    char name[100] = "Asif Abdullah";  // name directly pathano good practice na, tai arekta string er moddhe age name set kore pore sheta pathano hocche ///   
    Student asif(name,8,18,'B');

    //Student jahid("Asif Abdullah",8,18,'B');        // evabe ek line eo kora jay, kintu eta good practice na //

    return asif;  // ei function return kora hoye gele muche jay, kintu tar aage asif er shob kichu return kore dey. Jeta Student 'a' diye recieve kora hoise. Ekhon 'a' er moddhe jahid er shob properties ase ///
}   // rvo = return value optimization er maddhome pass kre dise


int main()
{
    Student a = fun();  // asif ja ja return korse shob 'a' recieve korse.......'asif' (mane same name) dileo kaj korto ---> Normal function er motoi kaj kore eta //
    //internally a.name = asif.name // a.roll = asif.roll evabe value gula chole astese
    cout << "Asif's Information:" << endl;
    cout << a.name << endl;
    cout << a.roll << endl;
    cout << a.sec << endl;
    cout << a.cls << endl << endl;
            
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// class Student                
// {
//     public:
//         char name[100];
//         int cls;
//         int roll;
//         char sec;

//         Student(int c, int r, char s, char* n){
//             cls = c; 
//             roll = r;
//             sec = s;
//             strcpy(name, n);
//         }
// };

// Student fun(){
//     char nm[100] = "Jahid Hridoy";     
//     Student jahid(7, 56, 'B', nm);

//     return jahid;                      
// }

// int main()
// {
//     Student j = fun();          // jahid ja ja return korse shob 'j' recieve korse.......'jahid' (mane same name) dileo kaj korto ---> Normal function er motoi kaj kore eta //

//     cout << j.name << endl;
//     cout << j.cls << endl;
//     cout << j.roll << endl;
//     cout << j.sec << endl;
            
//     return 0;
// }
