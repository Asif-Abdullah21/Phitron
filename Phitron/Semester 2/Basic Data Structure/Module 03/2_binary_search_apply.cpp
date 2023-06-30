#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //array must be sorted, when we are implementing binary search algorithm
    //sort na thakle sort kore nite hobe

    bool f = false;

    int l = 0;
    int r = n-1;
    int val,pos;
    cin >>val;

    while (l<=r)
    {
        int mid_i = (l+r)/2;
        if(a[mid_i]==val)
        {
            f=true;
            pos = mid_i;
            break;
        }

        if(val>a[mid_i]) l = mid_i+1; //dane jabe
        else r = mid_i-1;  //bame jabe
    }

    if(f==true) cout << "Yes Found at index: "<< pos << endl;
    else cout << "NO Not Found\n";
    
     
    return 0;
}





//-------------------------


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>> n;
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
    

//     bool f = false;

//     int l = 0;
//     int r = n-1;
//     int val,pos;
//     cin >>val;

//     while (l<=r)
//     {
//         int mid_i = (l+r)/2;
//         if(a[mid_i]==val)
//         {
//             f=true;
//             pos = mid_i;
//             break;
//         }
//         else if(val<a[mid_i]) r = mid_i-1;  //bame jabe
//         else if(val>a[mid_i]) l = mid_i+1; //dane jabe
//     }

//     if(f==true) cout << "Yes Found at index: "<< pos << endl;
//     else cout << "NO Not Found\n";
    
     
//     return 0;
// }


