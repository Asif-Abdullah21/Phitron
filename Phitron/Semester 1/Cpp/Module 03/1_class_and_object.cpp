#include <bits/stdc++.h>
using namespace std;

class Student /// "Student" holo user defined data type ///  here we are creating user defined data type
{
    public:
        char name[101];
        int roll;
        int cls;
        char section;
};

int main()
{
    Student asif; /// Student holo data type ar asif holo Student type er ekta variable (int a; jevabe declare kore sei rokom e eta) ///
                    
    asif.roll = 18;
    asif.cls = 8;
    asif.section = 'B';
    char nm1[101] = "Asif Abdullah"; /// ei string ta banano hoise karon name er moddhe = diye name pathano jay na. Tai arekta string er moddhe nam initialize kore seta copy kore pathate hoy ///
    strcpy(asif.name,nm1);   /// name copy kore asif class er nameer moddhe pathano hocche ///

    Student masud;
    masud.roll = 15;
    masud.cls = 8;
    masud.section = 'B';
    char nm2[101] = "Masud Abdullah";
    strcpy(masud.name,nm2);

    //Printing:

    cout << "Asif's Information:" << endl; 
    cout << asif.name << endl;
    cout << asif.roll << endl;
    cout << asif.section << endl;
    cout << asif.cls << endl<< endl;

    cout << "Masud's Information:" << endl; 
    cout << masud.name << endl;
    cout << masud.roll << endl;
    cout << masud.section << endl;
    cout << masud.cls << endl;


    return 0;
}
