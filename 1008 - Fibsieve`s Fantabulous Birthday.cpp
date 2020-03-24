#include<bits/stdc++.h>
using namespace std;

void odd(long long n,long long m)
{
    long long row,col;
    long long diff = (m*m) - n + 1;
    if(m>=diff)
    {
        row = m;
        col = diff;
    }
    else
    {
        row = n- (m-1)*(m-1);
        col = m;

    }
    cout<<col<<" "<<row<<endl;
}


void even(long long n,long long m)
{

    long long row,col;
    long long diff = (m*m) - n + 1;
    if(m>=diff)
    {
        col = m;
        row = diff;
    }
    else
    {
        col = n- (m-1)*(m-1);
        row = m;

    }
    cout<<col<<" "<<row<<endl;
}


int main()
{
    long long test,n,m,diff,i,row,col;
    cin>>test;
    for(i=1; i<=test; i++)
    {
        cin>>n;;
        m = ceil(sqrt(n));
        cout<<"Case "<<i<<": ";
        if(m%2!=0)
            odd(n,m);
        else
            even(n,m);
    }
}
