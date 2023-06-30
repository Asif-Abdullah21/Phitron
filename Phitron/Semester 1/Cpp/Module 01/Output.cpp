#include <iostream>
using namespace std;
int main()
{
    // printf("Hello World"); -> for c
    cout << "Hello World\n"; // if we don't use using namespace std; then we wave to write:
                        // std::cout<<"Hello World\n";
    int a=10,b=20;
    cout << a << endl;
    cout << b << endl;
    cout << "Sum = "<< a+b << endl;

 return 0;
}


//Phitron's code:

// #include<iostream>
// using namespace std;
// int main()
// {
//     // printf("Hello World"); -> for c
//     // std::cout<<"Hello World";
//     // std::cout<<"Hello\n";
//     // std::cout<<"World\n";
//     // std::cout<<"Hello "<<"World";
//     // std::cout<<"Hello"<<std::endl<<"World";
//     int a=100,b=200;
//     // printf("%d",a);
//     // std::cout<<a<<b;
//     cout<<a<<" "<<b<<endl;
//     return 0;
// }