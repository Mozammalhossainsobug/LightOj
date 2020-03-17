#include<bits/stdc++.h>
using namespace std;

void pushing_left(deque<int> &de, int n)
{
    int value;
    cin>>value;
    if(n==de.size())
        cout<<"The queue is full"<<endl;
    else
    {
        de.push_front(value);
        cout<<"Pushed in left: "<<value<<endl;
    }
}

void pushing_right(deque<int> &de,int n)
{
    int value;
    cin>>value;
    if(n==de.size())
        cout<<"The queue is full"<<endl;
    else
    {
        de.push_back(value);
        cout<<"Pushed in right: "<<value<<endl;
    }
}

void pop_from_left(deque<int> &de)
{
    if(!de.empty())
    {
        cout<<"Popped from left: "<<de.front()<<endl;
        de.pop_front();
    }
    else
        cout<<"The queue is empty"<<endl;

}


void pop_from_right(deque<int> &de)
{
    if(!de.empty())
    {
        cout<<"Popped from right: "<<de.back()<<endl;
        de.pop_back();
    }
    else
        cout<<"The queue is empty"<<endl;

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test,k=1;
    cin>>test;
    while(test--)
    {
        cout<<"Case "<<k++<<":"<<endl;
        int n,m,value;
        string s;
        deque<int>de;
        cin>>n>>m;

        while(m--)
        {
            cin>>s;
            if(s=="pushLeft")
                pushing_left(de,n);
            else if(s=="pushRight")
                pushing_right(de,n);
            else if(s=="popLeft")
                pop_from_left(de);
            else if(s=="popRight")
                pop_from_right(de);

        }

    }
    return 0;
}
