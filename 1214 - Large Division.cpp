#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test,n,number,k=1,i;
    cin>>test;
    while(test--)
    {
        string str;
        cin>>str>>n;
            if(str[0]=='-') i = 1;
            else i = 0;
            if(n<0)
                n *= -1;
            number = 0;
            for( ;i<str.length();i++)
                {
                    number = (str[i]- '0')  + number*10;
                    number %= n;
                    //cout<<number<<endl;
                }


                cout<<"Case "<<k++<<": ";
                if(number==0)
                    cout<<"divisible"<<endl;
                else
                    cout<<"not divisible"<<endl;

    }
}
