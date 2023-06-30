//vector replace:

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int m;
    cin >> m;
    vector<int> v2(m);

    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }

    int indx;
    cin >> indx;

    // for (int i = indx; i < n; i++)
    // {
    //     replace(v.begin()+indx,v.end(),v[i],v2[i-indx]);
    // }

    for (int i = 0; i < m; i++)
    {
        replace(v.begin()+indx,v.end(),v[i+indx],v2[i]);
    }
    

    
    // for (int i = indx; i < n; i++)
    // {
    //     v[i] = v2[i-indx];
    // }
    

    for(int i:v)
    {
        cout << i << " ";
    }
    
    
     
    return 0;
}




// //vector erase:

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // vector<int> v = {1,3,5,7,9};
//     // v.erase(v.begin()+2); // single value delete
    
//     // for(int x:v)
//     // {
//     //     cout << x << " "; //1 3 7 9
//     // }

//     vector<int> v = {1,3,5,7,9};
//     v.erase(v.begin()+1,v.begin()+4); //dite hbe shurur ppointer ebong ses pointer jar ag prjnto se delete krbe
//     // v.erase(v.begin()+1,v.end()-1);   //mane 2nd parameter jei porjnto delete krbo tar porer ghorer pointer ta dite hbe
//     //O(n+k) // k holo koto gula number delete krte hbe ta

//     for(int x:v)
//     {
//         cout << x << " "; //1 9
//     }
     
//     return 0;
// }


//----------------------------------------------
//vector insert:

// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     vector<int> v = {1,3,5,7,9};
//     vector<int> v1 = {2,4,6,8};
//     // v.insert(v.begin()+2,10);
//     // for(int x:v)
//     // {
//     //     cout << x << " "; //1 3 10 5 7 9 
//     // }
    
//     v.insert(v.begin()+2,v1.begin(),v1.end()); //O(N+K)
//     for(int x:v)
//     {
//         cout << x << " "; //1 3 2 4 6 8 5 7 9
//     }
     
//     return 0;
// }


// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     vector<int> v = {1,3,5};
//     v.push_back(7);
//     v.push_back(9);
//     v.pop_back();

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
    
     
//     return 0;
// }



//--------------------------------------


// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     vector<int> x = {2,4,6};
//     vector<int> y = {2,4,6,8,10};
//     vector<int> v = {1,3,5};

//     v = x; //O(1) -> size same

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;

//     v = y; //O(N) -> size different tai N ekhane y er size, maximum jeta hbe r ki

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
    
     
//     return 0;
// }
