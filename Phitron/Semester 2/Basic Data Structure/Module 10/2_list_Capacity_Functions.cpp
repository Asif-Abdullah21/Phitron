#include <bits/stdc++.h>
using namespace std;
int main()
{
    //list<int> myList = {10, 20, 30, 40, 50};
   // cout << myList.size() << endl; //O(1)  //Output: 5 //Returns the size of the list.
    //cout << myList.max_size() << endl; //O(1) //Output: 357913941  //Returns the maximum size that the list can hold.
    
    //myList.clear(); //Clears the list elements. Do not delete the memory, only clear the list.
    // cout << myList.size() << endl; //Output: 0   ,becaue we have cleared the list in the previous line.

    // for(int val:myList)
    // {
    //     cout << val << ' '; //Because of clearing the list this loop don't give any output.
    // }
    
    // if(myList.empty()==true) cout << "EMPTY\n"; //Output: EMPTY // Becaue it's empty now because of in 9th line we have cleared the list.
    //  //this function //Return true/false if the list is empty or not.
    // else cout << "NOT EMPTY\n";

    list<int> new_list = {10,20,30,40,50};
    new_list.resize(2);  // Output:10 20   //Change the size of the list.
    //new_list.resize(5); //Output:10 20 0 0 0
    new_list.resize(5,100);   // Output:10 20 100 100 100 //O(K); where K is the difference between new size and current size.


    // If we increase the list size by using the resize() function then if we do not pass any value as parameter then the extra spaces will be
    // filled by 0 and if we pass any value as parameter then the extra size will be filled by the value;


    for (int val :new_list)
    {
        cout << val << ' ';
    }
    

    return 0;
}