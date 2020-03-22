#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,me,lift,came_to_me,lets_out,k=1;
    cin>>test;
    while(test--)
    {
        cin>>me>>lift;
        came_to_me = abs(me - lift)*4 + 11;
        lets_out = abs(me)*4 + 8;
        cout<<"Case "<<k++<<": "<<came_to_me + lets_out<<endl;
    }
}
