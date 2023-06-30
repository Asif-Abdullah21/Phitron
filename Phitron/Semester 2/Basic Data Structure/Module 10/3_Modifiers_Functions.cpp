#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    list<int> myList = {10,20,30};
    list<int> newList;

    newList = myList; //We can assign like this.
    // newList.assign(myList.begin(),myList.end()); //same as previous

    // For vector we can assign vector A by vector B like this-->  A.assign(B);
    // But we cannot assign list as like vector.for list we have to give the begin() and end() pointer as parameter in assign function.

    for(int val:newList)
    {
        cout << val << ' ';
    }
    */


    /*

    list<int> myList = {10,20,30};
    myList.push_back(40); //inserting at tail //Output: 10 20 30 40
    myList.push_back(40); //inserting at tail //Output: 10 20 30 40 40
    myList.push_front(5); //inserting at head //Output: 5 10 20 30 40 40
    myList.push_front(5); //inserting at head //Output: 5 5 10 20 30 40 40
    myList.pop_back(); //delete from tail     //Output: 5 5 10 20 30 40
    myList.pop_front();  //delete from head   //Output: 10 20 30 40 40

    for(int val:myList)
    {
        cout << val << ' ';
    }

    */

   /*

   list<int> myList = {10,20,30,40,50};
   //next(myList.begin(),i); // access the ith element

   //myList.insert(next(myList.begin(),2),100); // { next(myList.begin(),2) internally loop chalay ith index a niye jacche }

    //myList.insert(next(myList.begin(),2),100);  //-->Insert elements at a specific position  //Output: 10 20 100 30 40 50
   // myList.insert(next(myList.begin(),2),{100,200,300}); //multiple value insert   //10 20 100 200 300 30 40 50
    //  list<int> new_list = {60,70,80};
    //myList.insert(next(myList.begin(),myList.size()),new_list.begin(),new_list.end()); //insert another list to the back of the previous list //output: 10 20 30 40 50 60 70 80 
    
    //   list<int> new_list = {60,70,80};
    //  myList.insert(next(myList.begin(),1),new_list.begin(),new_list.end());    //Insert Another List  //10 60 70 80 20 30 40 50 
   
    // vector<int>v={5,15,25};
    // myList.insert(next(myList.begin(),1),v.begin(),v.end()); //insert vector// 10 5 15 25 20 30 40 50 
   
    int a[3] = {7, 77, 777};
    myList.insert(next(myList.begin(),2),a,a+3); //inserting array // 10 20 7 77 777 30 40 50

    for(int val:myList)
    {
        cout << val << ' ';
    }

    */

   /*

    list<int> myList = {10,20,30,40,50,60,70};
    //myList.erase(next(myList.begin(),2)); // 10 20 40 50 60 70  //Delete elements from a specific position
    myList.erase(next(myList.begin(),2),next(myList.begin(),5)); //second parameter a 5 disi karon jei prjnto delete krte chai tar porer index bole dite hoy  //10 20 60 70 //it will delete all the element of the list in the given range

    for(int val:myList)
    {
        cout << val << ' ';
    }

    */

   /*
   list<int> myList = {30,20,30,40,30};

   replace(myList.begin(),myList.end(),30,100); ////Replace all the value with replace_value. Not under a list STL
   // first one is which value you want to replace and the second value is by which value you want to replace.
   
    for(int val:myList)
    {
        cout << val << ' ';
    }
    */

    list<int> myList = {30,20,30,40,30};
    auto it = find(myList.begin(),myList.end(),40); //Not under a list STL
    // jei value ta khujtesi oita list a thakle oi value er
    // pointer return korbe otherwise list er end() pointer return korbe.

    if(it == myList.end()) cout << "NOT FOUND\n";
    else cout << *it << " found Alhamdulillah\n";


    return 0;
}
