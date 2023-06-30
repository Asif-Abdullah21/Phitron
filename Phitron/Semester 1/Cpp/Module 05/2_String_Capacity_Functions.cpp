#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string s = "Hello World";

    // cout << s.size() << endl;  //null character baad diye baki main string er size/length dibe /// string er length ba size ber korar jonno ///
    // cout << s.max_size() << endl;    /// je machine e kaj kora hocche shei machine string er jonno maximum koto size nite parbe. Online compiler e 10^6 porjonto dey ///
   
    // cout << s.capacity() << endl;     /// eta shurute kichu declare korle ek rokom thake. Er pore jodi input er maddhome size barai tahole automatically size + capacity dui tai barbe ///
    
    // s = "Hello Anisul islam!"; // Ami boro string dile 's' autometically capacity baray nibe 
    // cout << s .capacity() << endl; 

    // //str.clear():
    
    // string str = "Hello";
    // cout << str << " " << str.size() <<endl;
    // str.clear();  //string clear ba khali kore dey  /// jodi str.clear() diye clear kore deya hoy tahole er age string e kichu initialize kore kore dileo empty e print kore ///
    
    // cout << str << " " << str.size() <<endl;

    // //str.empty():

    // if(str.empty()==true)  cout << "Empty\n"; // or if(str.size()==0)  cout << "Empty\n";
    // //str.empty() true or false value dey, jodi string ta khali hoy tahole true return kore r na hole false return kore      
    // else cout << "Not Empty\n";

    //str.resize():

    string s1;
    cin >> s1;                 /// Input: Hello_world ///

    s1.resize(5);           /// first 5 ta ta character rekhe bakigula delete kore dibe ///
    cout << s1 << endl;        /// Output: Hello ///

    s1.resize(11,'o');     // resize kore string boro korte chaile evabe s1.resize(11,'o'); deya jabe 
    cout << s1 << endl;        /// Output: Hellooooooo ///
    s1.resize(22,'o');
    cout << s1 << endl;
 
    
    return 0;
}