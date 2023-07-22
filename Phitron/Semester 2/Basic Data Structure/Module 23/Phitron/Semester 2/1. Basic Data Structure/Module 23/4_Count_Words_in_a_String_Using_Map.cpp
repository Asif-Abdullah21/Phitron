#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);

    string word;
    stringstream ss(str);
    // stringstream ss;
    // ss<< str;

    map<string,int> mp; //initially sob value 0 thakbe

    while (ss >> word)
    {
        mp[word]++; // word ta orthar key tar value 1 barabo;
    }

    for (auto i = mp.begin(); i !=mp.end(); i++)
    {
        cout << i->first << " - " << i->second << endl;
    }

    /*
    input: i love cricket they love cricket 
    output:
    cricket - 2
    i - 1
    love - 2
    they - 1
    
    */
    

    //cout << mp["cricket"] << endl; //// je word er count korte chai sei word " " er vitor diye dite hobe //
    
     
    return 0;
}
