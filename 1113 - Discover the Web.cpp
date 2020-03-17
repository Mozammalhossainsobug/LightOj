#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test,k=1;
    cin>>test;
    while(test--)
    {
        cout<<"Case "<<k++<<":"<<endl;
        bool exit = false;
        string operation,website,current = "http://www.lightoj.com/";
        stack<string> backword,forword;
        while(!exit)
        {
            cin>>operation;

            if(operation== "VISIT")
            {
                cin>>website;
                backword.push(current);
                current = website;
                cout<<current<<endl;
                 while(!forword.empty())
                    forword.pop();
            }
            else if(operation== "QUIT")
            {
                exit = true;
            }
            else if(operation== "BACK")
            {
                if(!backword.empty())
                {
                    forword.push(current);
                    current = backword.top();
                    cout<<current<<endl;
                    backword.pop();
                }
                else
                    cout<<"Ignored"<<endl;
            }
            else  if(operation==  "FORWARD")
            {
                if(!forword.empty())
                {
                    backword.push(current);
                    current = forword.top();
                    cout<<current<<endl;
                    forword.pop();
                }
                else
                    cout<<"Ignored"<<endl;
            }
        }
    }
}
