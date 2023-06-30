#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10,20,30,40,50};
    cout << myList.front() << endl;
    cout << myList.back() << endl;

    // int i=3;
    // //ith index accessing:
    // cout << *next(myList.begin(),i); //address ferot dey tai derefence kre value dekhte hbe
    // // r next er maddhone internally loop chalay ith index a jay

    //list<int> :: iterator it;
    auto it = next(myList.begin(),3);
    //next(myList.begin(),indx) --->It returns a iterator. that's why we have to recieve it by a iterator.
    
    cout << *it << endl;


     
    return 0;
}
