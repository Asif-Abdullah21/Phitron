#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[j]>a[i]) //sorting reversely // 5 4 3 2 1
            {
                long long temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        
    }

    long long sum = 0;
    for (int i = 0; i < k; i++)
    {
        if(a[i]>0) sum += a[i];
        else break;
    }

    printf("%lld\n",sum);
    
    return 0;
}

/* Code in cpp by EslamKhder: (youtube: Eslam Khder Academy)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size,num;
	cin>>size>>num;
	long long arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	} // [1 ,9 ,8 ,7 ,5,9]
	sort(arr,arr+size);
	reverse(arr,arr+size);
	long long sum = 0;
	for(int i=0;i<num;i++){ // 0 1 
		if(arr[i] < 0){
			break;
		}
		sum += arr[i];
	}
	cout<<sum<<endl;
}

*/