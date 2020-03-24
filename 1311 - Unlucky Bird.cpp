#include<bits/stdc++.h>
using namespace std;

double distance(double u,double a)
{
    return ( (u*u)/(2*a) );
}


int main()
{
    long long test,k=1;
    double u1,u2,u3,a1,a2,t1,t2,t,d,distance_covered_by_bird,d1,d2;
    cin>>test;
    while(test--)
    {
        cin>>u1>>u2>>u3>>a1>>a2;
        t1 = u1/a1;
        t2 = u2/a2;
        t = max(t1,t2);
        d1 = distance(u1,a1);
        d2 = distance(u2,a2);
        d = d1 + d2;
        distance_covered_by_bird = u3*t;
        cout<<"Case "<<k++<<": ";
        printf("%.10f %.10f\n",d,distance_covered_by_bird);
    }
}
