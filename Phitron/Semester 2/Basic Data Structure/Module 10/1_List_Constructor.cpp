#include <bits/stdc++.h>
using namespace std;
int main()
{
    //list holo doubly linked list er library

    //1// list<int> myList; //Construct a list with 0 elements
    // cout << myList.size() ; //here size is 0 
 
    //2// list<int> list1(10); //Construct a list with 10 elements and the value will be garbage.

    //3// list<int> list1(10,5); //Construct a list with 10 elements and the value will be 5.
    // cout << list1.size() << endl;
    // cout << list1.front();
     //list<int> list2 = {1,3,5,7,9};

    //4// list<int> mylist(list2);  //Construct a list by copying another list list2
    
    // int a[5] = {100, 200, 300, 400, 500};

    //5// list<int> mylist(a,a+5);   //Construct a list by copying all elements from an array A of size 5.
    // cout << mylist.front() << " " << mylist.back() << endl;
     
    vector<int> v = {10, 20, 30, 40, 50};
    list<int> mylist(v.begin(),v.end());
    // cout << mylist.front() << " " << mylist.back() << endl;

    //list<int> :: iterator it;//auto lekhle r eta lekha lge na

    // for (auto it = mylist.begin(); it != mylist.end(); it++)
    // {
    //     cout << *it << " ";
    // }

     
    for(int val:mylist)
    {
        cout << val << ' ';
    }

   // iterators:
   // myList.begin() ---> Pointer to the first element.
   // myList.end() ---> Pointer to the last element.
    


    

    return 0;
}
