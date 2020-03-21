#include<bits/stdc++.h>              //MissYouNilu
using namespace std;

bool odd(long long number)
{
    long long ones = 0;
    while(number!=0)
    {
        if(number%2==1)
            ones++;
        number /= 2;
    }
    if(ones%2==0)
        return false;
    else
        return true;
}



int main()
{
    int test,k=1;
    long long n;
    cin>>test;
    while(test--)
    {
        cin>>n;
        cout<<"Case "<<k++<<": ";
        if(odd(n))
            cout<<"odd"<<endl;
        else
            cout<<"even"<<endl;

    }
}
