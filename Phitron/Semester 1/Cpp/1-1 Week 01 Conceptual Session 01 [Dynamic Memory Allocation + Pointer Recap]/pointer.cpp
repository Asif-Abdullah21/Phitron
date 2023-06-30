#include<iostream>
using namespace std;

int main()
{
    int num = 5;
    int* num_ptr = &num;

    cout << *num_ptr << endl; // de refferencing //adress+* = adress a thaka value

    int** num_ptr_er_ptr = &num_ptr;
    cout << num_ptr_er_ptr << endl;

    cout << num_ptr << endl; // nicher line(12 number) r ei line a same output dibe
    cout << *num_ptr_er_ptr << endl;// er moddhe jei value ase sei adress a giye take de refference kre setar value dekhabe
                                    // ja holo num_ptr a rakha adress, ja num_ptr er value hisebe ase r ki
    cout << **num_ptr_er_ptr << endl; // now output will be 5 // 2 bar de reference kre value peye gesi

    // cout << num_ptr << endl;
    // cout << *num_ptr << endl;

    return 0;
}




/*

||-----------------------||
||  Asif Mohammed Sifat  ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||

#include<bits/stdc++.h>
using namespace std;
int main(){

    //introduction + example
    int num = 10;
    int* num_ptr = &num;
    int** num_ptr_ptr = &num_ptr;

    cout<<num_ptr<<endl;        
    cout<<*num_ptr<<endl;   

    
    cout<<num_ptr_ptr<<endl;        
    cout<<*num_ptr_ptr<<endl;      
    cout<<**num_ptr_ptr<<endl;      
              
    return 0;
}

*/