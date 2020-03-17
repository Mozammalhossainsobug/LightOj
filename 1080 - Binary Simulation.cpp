#include<bits/stdc++.h>
using namespace std;

void update(vector<long long>&lazy,long long node,long long b,long long e, long long i, long long j)
{
    if(b>j || e<i)
        return;
    if(i<=b && e<=j)
    {
        lazy[node] += 1;
        return;
    }
    long long left = 2*node;
    long long right = 2*node + 1;
    long long mid = (b+e)/2;
    update(lazy,left,b,mid,i,j);
    update(lazy,right,mid+1,e,i,j);
}

long long query(vector<long long> &v, vector<long long> &lazy, long long node,long long b,long long e,long long i)
{
    if(i<b || i>e)
        return 0;

    long long left = 2 * node;
    long long right = 2* node + 1;
    long long mid = (b + e) / 2;

    if(b<=i && i<=e)
    {
        v[node] = v[node] + lazy[node];
        lazy[left] += lazy[node];
        lazy[right] += lazy[node];
        lazy[node] = 0;
    }
    if(b==i && i==e)
    {
        v[node] = v[node] + lazy[node];
        lazy[left] += lazy[node];
        lazy[right] += lazy[node];
        lazy[node] = 0;
        return v[node];
    }
    long long p1 = query(v,lazy,left,b,mid,i);
    long long p2 = query(v,lazy,right,mid+1,e,i);
    return p1+p2;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test,k=1,q,from,to,index,n,i,change;
    string str;
    char ch;
    cin>>test;
    while(test--)
    {
        cout<<"Case "<<k++<<":"<<endl;
        cin>>str;
        n = str.length();
        vector<long long>tree;
        vector<long long>lazy;
        for(i=0; i<3*n; i++)
        {
            tree.push_back(0);
            lazy.push_back(0);
        }
        cin>>q;
        while(q--)
        {
            cin>>ch;
            if(ch=='I')
            {
                cin>>from>>to;
                update(lazy,1,0,n-1,from-1,to-1);
            }
            else
            {
                cin>>index;
                change = query(tree,lazy,1,0,n-1,index-1);
                if(change%2==0)
                    cout<<str[index-1]<<endl;
                else
                {
                    if(str[index-1]==0)
                        cout<<1<<endl;
                    else
                        cout<<0<<endl;
                }
            }
        }
    }

}
