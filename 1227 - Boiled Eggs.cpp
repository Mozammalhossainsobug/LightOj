#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,n,p,q,cnt,weight,i,k=1;
    cin>>test;
    while(test--)
    {
        cnt = weight = 0;
        cin>>n>>p>>q;
        int arr[n];
        for(i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        for(i=0; i<n; i++)
            if(cnt+1<=p && weight+arr[i]<=q)
            {
                cnt++;
                weight += arr[i];
            }

        cout<<"Case "<<k++<<": "<<cnt<<endl;
    }
}
