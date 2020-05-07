#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(i=a;i<b;i++)

vector<ll> failure_table(string ptrn,ll m)
{
    ll i,k=0;
    vector<ll>prefix(m,0);
    f(i,2,m){
        while(k>0 && ptrn[i]!=ptrn[k+1]) k = prefix[k];
         if(ptrn[i]==ptrn[k+1]) k++;
         prefix[i] = k;
    }
    return prefix;
}

vector<ll> compute_prefix(string str,string ptn)
{
    ll i,k=0;
    ll len1 = str.length(), len2 = ptn.length();
    vector<ll> prefix = failure_table(ptn,len2);
    vector<ll>matching;
    f(i,1,len1){
        while(k>0 && ptn[k+1]!=str[i]) k = prefix[k];
          if(str[i]==ptn[k+1]) k++;
          if(k==len2-1){
            matching.push_back(i-len2); k = prefix[k];}
    }
    return matching;
}



int main()
{
    ll n,i;
    string str,ptn;
    cin>>n;
   f(i,1,n+1)
   {
       cin>>str>>ptn;
       str.insert(0,"0"); ptn.insert(0,"0");
       vector<ll> ans = compute_prefix(str,ptn);
       cout<<"Case "<<i<<": "<<ans.size()<<endl;
   }
}
