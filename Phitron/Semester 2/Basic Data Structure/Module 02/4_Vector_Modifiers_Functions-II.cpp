#include <bits/stdc++.h>
using namespace std;
int main()
{
    //find: //O(N)
    vector<int> v ={1,3,4,2,7,3,9,2,2,2,7,3,1,2};

   // vector<int> :: iterator it;

    auto it = find(v.begin(),v.end(),9);//ekhane auto it lekhle bujhbe je dan pashe jehetu vector astese taile vector er iterator toiri krbe //shurur o ses er pointer bole dilam, //erpor kon value find krtesi ta bole dilam
    // eta pointer ba iterator ferot dey, ekhane vector er iterator ferot dibe, string er moto index ferot dey na
    
    if(it==v.end()) cout << "NOT FOUND\n"; // na paua gele it ta v.end() a obosthan krbe
    else cout << *it << " is found" << endl;                               
    return 0;
}

//---------------------------------

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     //replace: O(N)
//     vector<int> v ={1,3,2,2,3,7,9,2,2,2,7,3,1,2};
//     replace(v.begin(),v.end()-1,2,5); //kototuku theke kototuku prjnto replace krbo seta prothom 2 ta parameter a bole dilam
//                                       //erpor kon value ke ki diye replace krbo seta porer 2 tay bole dilam   
//     for(int i:v) 
//     {
//         cout << i << " ";
//     }

//     return 0;
// }
