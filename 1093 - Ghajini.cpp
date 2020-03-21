#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void init(vector<ll> &mini,vector<ll> &maxi, vector<ll> &v, ll node, ll b,ll e)
{
    if(b == e)
    {
        mini[node] = v[b];
        maxi[node] = v[b];
        return;
    }
    ll left = 2*node;
    ll right = 2*node + 1;
    ll mid = (b + e) / 2;
    init(mini,maxi,v,left,b,mid);
    init(mini,maxi,v,right,mid+1,e);
    mini[node] = min(mini[left],mini[right]);
    maxi[node] = max(maxi[left],maxi[right]);
}

ll mini_query(vector<ll> &mini, ll node, ll b,ll e,ll i,ll j)
{
    if(i<=b && e<=j)
        return mini[node];

    ll mid = (b + e) / 2;
    ll res = INT_MAX;

    if(i <= mid)
        res = min(res,mini_query(mini,2*node,b,mid,i,j));

    if(j >= mid+1)
        res = min(res,mini_query(mini,2*node+1,mid+1,e,i,j));

    return res;
}

ll maxi_query(vector<ll> &maxi, ll node, ll b,ll e,ll i,ll j)
{
    if(i<=b && e<=j)
        return maxi[node];

    ll mid = (b + e) / 2;
    ll res = INT_MIN;

    if(i <= mid)
        res = max(res,maxi_query(maxi,2*node,b,mid,i,j));

    if(j >= mid+1)
        res = max(res,maxi_query(maxi,2*node+1,mid+1,e,i,j));

    return res;
}


int main()
{
    ll test,n,q,ans,i,k=1;
    cin>>test;
    while(test--)
    {
        ans = 0;
        cin>>n>>q;
        vector<ll>v(n);
        vector<ll>maxi(3*n,0),mini(3*n,0);
        for(i=0; i<n; i++)
            scanf("%lld",&v[i]);

        init(mini,maxi,v,1,0,n-1);
        for(i=0; i<n-q; i++)
        {
            ans = max(ans, (  maxi_query(maxi,1,0,n-1,i,i+q-1) - mini_query(mini,1,0,n-1,i,i+q-1) ));
        }
        printf("Case %lld: %lld\n",k++,ans);

    }
}
