#include<bits/stdc++.h>
using namespace std;

void string_generating(string &str, string &sa,string &sb,string &sc,string &sd)
{
    long long i;
    for(i=0; i<str.length(); i++)
    {
        if(str[i]=='.')
        {
            i++;
            break;
        }
        sa += str[i];
    }
    for( ; i<str.length(); i++)
    {
        if(str[i]=='.')
        {
            i++;
            break;
        }
        sb += str[i];
    }
    for( ; i<str.length(); i++)
    {
        if(str[i]=='.')
        {
            i++;
            break;
        }
        sc += str[i];
    }
    for( ; i<str.length(); i++)
    {
        if(str[i]=='.')
        {
            i++;
            break;
        }
        sd += str[i];
    }
}

void getting_a_b_c_d(string &sa, string &sb,string &sc,string &sd,int &a,int &b,int &c,int &d)
{
    a = stoi(sa);
    b = stoi(sb);
    c = stoi(sc);
    d = stoi(sd);
}

string binary(int n)
{
    vector<int>v;
    int i;
    string str;
    while(n!=0)
    {
        v.push_back (n%2);
        n /= 2;
    }
    while(v.size()!=8)
        v.push_back(0);
    reverse(v.begin(),v.end());
    for(i=0; i<v.size(); i++)
        str += (v[i]+'0') ;
    return str;
}


bool checking(string &str,string &sa, string &sb,string &sc,string &sd)
{
    string a,b,c,d;
    string_generating(str,a,b,c,d);
    if(a==sa && b==sb && c==sc && d==sd)
        return true;
    else
        return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test,x,a,b,c,d,i,k=1;
    string str,btr;
    vector<int>va,vb,vc,vd;
    cin>>test;
    while(test--)
    {
        string sa,sb,sc,sd,ba,bb,bc,bd;
        cin>>str;
        string_generating(str,sa,sb,sc,sd);
        getting_a_b_c_d(sa,sb,sc,sd,a,b,c,d);
        ba = binary(a);
        bb = binary(b);
        bc = binary(c);
        bd = binary(d);
        cin>>btr;
        cout<<"Case "<<k++<<": ";
        if(checking(btr,ba,bb,bc,bd))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }
}
