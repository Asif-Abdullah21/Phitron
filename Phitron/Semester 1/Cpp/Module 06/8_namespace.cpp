#include <bits/stdc++.h>
using namespace std;

namespace asif_std  //namespace is a of a group, jekhane onk kichu rakha jay, ebong pore sekhane tar use kra jay sohoje
{
    // eta public kra lge na, eta always public
    int age = 22;
    void display1()
    {
        cout << "asif_std namespace theke\n";
    }
     

}

namespace sayem_std
{
    // eta public kra lge na, eta always public
    int age2 = 21;
    void display2()
    {
        cout << "sayem_std namespace theke\n";
    }
     

}

using namespace asif_std;
using namespace sayem_std;

int main()
{

    //cout << asif_std::age << endl; //using namespace asif_std bole dile r asif_std:: diye evabe lekha lgbe na
    cout << age << endl; //asif_std er age
    cout << age2 << endl; //asif_std er age2
    display1();
    display2();


    return 0;
}

//--------------------------------------------------------------------------------------------------------//


// #include <bits/stdc++.h>
// using namespace std;

// namespace asif_std  
// {
//     int age = 22;
//     void display()
//     {
//         cout << "asif_std namespace theke\n";
//     }
     

// }

// namespace sayem_std
// {
//     // eta public kra lge na, eta always public
//     int age2 = 21;
//     void display()
//     {
//         cout << "sayem_std namespace theke\n";
//     }
     

// }

// using namespace asif_std;

// int main()
// {

   
//     cout << age << endl; //asif_std er age
//     display(); //using namespace asif_std; upre declare kre disi tai r asif_std:: deya lglo na
//     sayem_std::display(); // same name deya jbe na, dile evabe alada vabe sayem_std::display(); evabe bole diyei kaj krte hbe


//     return 0;
// }






