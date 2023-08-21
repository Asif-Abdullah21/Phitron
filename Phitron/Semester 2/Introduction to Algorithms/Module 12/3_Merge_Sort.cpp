#include <bits/stdc++.h>
using namespace std;

void mergeSort(int a[],int l,int mid,int r)
{
    int leftSize = mid-l+1;
    int rightSize = r-mid;

    int L[leftSize];
    int R[rightSize];

    int k=0;

    for(int i=l;i<=mid;i++)
    {
        L[k] = a[i];
        k++;
    }

    k=0;

    for(int i=mid+1;i<=r;i++)
    {
        R[k] = a[i];
        k++;
    }

    int i=0,j=0,curr=l;

    while (i<leftSize && j<rightSize)
    {
        if(L[i]<=R[j])
        {
            a[curr] = L[i];
            i++;
        }
        else{
            a[curr] =  R[j];
            j++;
        }
        curr++;
    }

    while (i<leftSize)
    {
        a[curr] = L[i];
        curr++;
        i++;
    }

    while (j<rightSize)
    {
        a[curr] = R[j];
        curr++;
        j++;
    }
    
}

void divide(int a[],int l,int r)
{
    if(l<r)
    {
        int mid = (l+r)/2;
        divide(a,l,mid);
        divide(a,mid+1,r);

        mergeSort(a,l,mid,r);

        // cout << "THIS\n";
        // for (int i = l; i <=mid; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;

        // for (int i = mid+1; i <=r; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    divide(a,0,n-1);  // divide e ja ja pathaisi shetai pathano hoise //
    
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}
