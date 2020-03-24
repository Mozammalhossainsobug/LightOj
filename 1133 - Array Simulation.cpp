#include<bits/stdc++.h>
using namespace std;

void adding(vector<long long>&v)
{
    long long d,i;
    cin>>d;
    for(i=0; i<v.size(); i++)
        v[i] += d;
}

void multiplying(vector<long long>&v)
{
    long long d,i;
    cin>>d;
    for(i=0; i<v.size(); i++)
        v[i] *= d;
}

void dividing(vector<long long>&v)
{
    long long d,i;
    cin>>d;
    for(i=0; i<v.size(); i++)
        v[i] /= d;
}

int main()
{
    int test,n,m,k=1,i,y,z;
    char c;
    cin>>test;
    while(test--)
    {
        cin>>n>>m;
        vector<long long>v(n);
        for(i=0; i<n; i++)
            cin>>v[i];
        for(i=0; i<m; i++)
        {
            cin>>c;
            switch(c)
            {
            case 'S':
            {
                adding(v);
                break;
            }
            case 'M':
            {
                multiplying(v);
                break;
            }
            case 'D':
            {
                dividing(v);
                break;
            }
            case 'R':
            {
                reverse(v.begin(),v.end());
                break;
            }
            case 'P':
            {
                cin>>y>>z;
                long long temp = v[y];
                v[y] = v[z];
                v[z] = temp;
                break;
            }
            }
        }
        cout<<"Case "<<k++<<":\n"<<v[0];
        for(i=1; i<n; i++)
            cout<<" "<<v[i];
        cout<<endl;
    }
}
