#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> mp; // key and value

    mp["sakib al hasan"] = 75; // same as  mp.insert({"Sakib Al Hasan",75});
    mp["Tamim Iqbal"] = 29;
    mp["Nasir Hossain"] = 69; // O(logN), n songkhok er jonno O(NlogN) //

    cout << mp["sakib al hasan"] << endl;

    for (auto it = mp.begin(); it!=mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl; // de referrence kre value dekhtesi
    }


    // mp.insert({"Sakib Al Hasan",75}); //{"Sakib Al Hasan",75} evabe pair akare insert kre
    // mp.insert({"Tamim Iqbal",29});
    // mp.insert({"asif",10});
    // mp.insert({"rahat",45});
    //mp.insert({"akib",0});

   // cout << mp["asif"] << endl; //key diye dile value dekhabe // 10
    //cout << mp["nafis"] << endl; // key na thakle value 0 dekhabe
    

    // //value ta ase kina check kri:

    // if(mp.count("akib")) cout << "Present\n";
    // else cout << "Not Present\n";
    
    // for (auto it = mp.begin(); it!=mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    
     
    return 0;
}




/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> mp; // key and value
    mp.insert({"Sakib Al Hasan",75}); //{"Sakib Al Hasan",75} evabe pair akare insert kre
    mp.insert({"Tamim Iqbal",29});
    mp.insert({"asif",10});
    //mp.insert({"akib",0});
    mp.insert({"rahat",45});

    cout << mp["asif"] << endl; //key diye dile value dekhabe // 10
    cout << mp["nafis"] << endl; // key na thakle value 0 dekhabe
    

    //value ta ase kina check kri:

    if(mp.count("akib")) cout << "Present\n";
    else cout << "Not Present\n";
    
    for (auto it = mp.begin(); it!=mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    
     
    return 0;
}


*/