#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test,n,total,q,k=1;
    string str;
    cin>>test;
    while(test--)
    {
        total = 0;
        cout<<"Case "<<k++<<":"<<endl;
        cin>>q;
        while(q--)
        {
            cin>>str;

            if(str=="donate")
            {
                cin>>n;
                total += n;
            }
            else if(str=="report")
                cout<<total<<endl;
        }
    }
}
