#include<bits/stdc++.h>
using namespace std;

bool inside(int x1,int y1,int x2,int y2,int x,int y)
{
    if(x1<=x && x<=x2 && y1<=y && y<=y2)
        return true;
    else
        return false;
}

int main()
{
    int test,i,x1,y1,x2,y2,x,y,q,k=1;
    cin>>test;
    while(test--)
    {
        cin>>x1>>y1>>x2>>y2;
        cin>>q;
        cout<<"Case "<<k++<<":"<<endl;
        while(q--)
        {
            cin>>x>>y;
            if(inside(x1,y1,x2,y2,x,y))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
}
