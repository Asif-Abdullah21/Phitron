#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;
    // cout << v.max_size()<< endl; //vector tar maximum size koto hote parbe, online compiler sadharanoto 10^6 dey

    // cout << v.capacity()<< endl;//0 //value rakhar sathe capacity update kre felbe
    // v.push_back(10);
    // cout << v.capacity()<< endl; //1
    // v.push_back(20);
    // cout << v.capacity()<< endl; //2
    // v.push_back(30);
    // cout << v.capacity()<< endl; //4 // she tar capacity ke double kre
    //                         // capacity er baire chole gele capacity digun kre fele
    // v.push_back(40);
    // cout << v.capacity()<< endl; //4
    // v.push_back(50);
    // cout << v.capacity()<< endl; //8 

    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v.push_back(50);
    // v.clear(); //size clear kre but internally memory clear kre na

    // cout << v.size() << endl;
    
    // for (int i = 0; i < v.size(); i++) //size 0 houar karone loop a dhuktese na but value ase
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // cout << v[0] << " " << v[1] << " " << v[2] << endl;
    

    // if(v.empty() == true) cout << "Size is 0\n";
    // else cout << "NOt zero\n"; 

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    v.resize(2);
    v.resize(7,100);
    cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++) //size 0 houar karone loop a dhuktese na but value ase
    {
        cout << v[i] << " ";
    }
    cout << endl;
    
    return 0;
}
