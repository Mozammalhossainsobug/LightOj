#include<bits/stdc++.h>
#define PI 3.141592653589793238
using namespace std;

double finding_x(double r2,double h,double r1)
{
    return ( (r2*h) / (r1-r2) );
}

double finding_r(double r2,double p,double x)
{
    return ( (r2*p + r2*x) / x );
}

double finding_volume(double r,double p,double x,double r2)
{
    return (1.0/3)*PI*(   r*r*(p +x) - r2*r2*x);
}

int main()
{
    int test,k=1;
    cin>>test;
    while(test--)
    {
        double r1,r2,h,p,x,r;
        cin>>r1>>r2>>h>>p;
        r1 *=1.0;
        r2 *= 1.0;
        h *= 1.0;
        p *=1.0;
        x = finding_x(r2,h,r1) * 1.0;
        r = finding_r(r2,p,x) * 1.0;
        cout<<"Case "<<k++<<": ";
        printf("%.10f\n",finding_volume(r,p,x,r2));
    }
}
