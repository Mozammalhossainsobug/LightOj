#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    long long urow,drow,diff,col,r1,c1,r2,c2,q,k=1;
    cin>>test;
    while(test--)
    {

        cin>>r1>>c1>>r2>>c2;
        col = c2 - c1;
        urow = r1 + col;
        drow = r1 - col;
        cout<<"Case "<<k++<<": ";
        if(  urow==r2  || drow==r2 )
            cout<<1<<endl;
        else
        {
            diff = urow - abs(r2);
            if(abs(diff)%2==0)
                cout<<2<<endl;
            else
                cout<<"impossible"<<endl;
        }

    }
}
