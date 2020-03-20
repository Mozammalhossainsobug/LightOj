//i love you Nilu
#include<bits/stdc++.h>
using namespace std;

void setting_up(vector<pair<long long,long long> >&v)
{
    long long i;
    pair<long long,long long>p;
    for(i=0; i<=1000; i++)
    {
        p.first = 0;
        p.second = i;
        v.push_back(p);
    }
}

void build_for_operation(vector<pair<long long ,long long> >&v)
{
    long long i,j,temp;
    vector<pair<long long,long long> >v1;
    for(i=1;i<=1000;i++)
        for(j=i+1;j<=1000;j++)
        if(v[j].second%i==0)
           v[j].first++;
    sort(v.begin(),v.end());

    for(i=2;i<1001;i++)
    {
        temp = v[i].second;
        for(j=i+1;j<1001;j++)
        if(v[i].first == v[j].first)
        {
            if(temp<v[j].second)
            {
                temp = v[j].second;
                v[j].second = v[i].second;
                v[i].second = temp;
            }
        }
    }

}

void ready(vector<pair<long long ,long long> > &v,vector<long long>&divisor)
{
    long long i;
    for(i=0;i<=1000;i++)
        divisor[i] = v[i].second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test,x,k=1,i;
    vector<pair<long long,long long> >v;
    vector<long long>divisor(1001);
    setting_up(v);
    build_for_operation(v);
    ready(v,divisor);
    /*for(i=0;i<1001;i++){
        cout<<i<<" "<<divisor[i]<<endl;}
    */
    cin>>test;
    while(test--)
    {
        cin>>x;
        cout<<"Case "<<k++<<": "<<divisor.at(x)<<endl;
    }
}
