#include <bits/stdc++.h>
using namespace std;

void merge(int a[],int l,int m,int r)
{
    int leftSize = m-l+1;
    int rightSize = r-m; // r-(m+1)+1;

    int L[leftSize];
    int R[rightSize];

    int k =0;
    for (int i = l; i <=m; i++)
    {
        L[k] = a[i];
        k++;
    }
    
    k=0;
    for (int i = m+1; i <=r; i++)
    {
        R[k] = a[i];
        k++;
    }

    int i =0,j=0,curr=l;
    while (i<leftSize && j<rightSize)
    {
        if(L[i]<=R[j])
        {
            a[curr] = L[i];
            i++;
        }
        else{
            a[curr] = R[j];
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

int main()
{
    int n;
    cin >> n;
    int a[n]; // i-> 0 theke 3 prjnto ekta part r bakita ekta part dhorlam

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    merge(a,0,3,n-1); //'a' diye array pathano hocche. 0 means 0 theke first array er first part er index, 3 means first array er jekhane shesh hobe shei index. n-1 holo second array jekhane shesh hobe shei index. second tar first (m+1) tehkei start hoy tai alada vabe pathate hoy na //
    
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}
