#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,x1,y1,x2,y2,x3,y3,x4,y4,area,k=1;
    cin>>test;
    while(test--)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        x4 = x3- (x2-x1);
        y4 = y1 + (y3 - y2);
        area = abs( x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));
        cout<<"Case "<<k++<<": ";
        cout<<x4<<" "<<y4<<" "<<area<<endl;
    }
}
