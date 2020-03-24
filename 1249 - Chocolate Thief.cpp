#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,student,highest,lowest,h,w,l,volume,k=1,i;
    string name,thief,victim;
    cin>>test;
    while(test--)
    {
        cin>>student;
        cin>>name>>h>>w>>l;
        highest = lowest = h * w * l;
        thief = name, victim =name;
        for(i=1; i<student; i++)
        {
            cin>>name>>h>>w>>l;
            volume = h*w*l;
            if(volume>highest)
            {
                highest = volume;
                thief = name;
            }
            else if(volume<lowest)
            {
                lowest = volume;
                victim = name;
            }
        }
        cout<<"Case "<<k++<<": ";
        if(highest == lowest)
            cout<<"no thief"<<endl;
        else
        {
            cout<<thief<<" took chocolate from "<<victim<<endl;
        }
    }
}
