#include<bits/stdc++.h>
#define PI 3.141592653589793238
using namespace std;
int main()
{
    int test,k=1;
    cin>>test;
    while(test--)
    {
        double r1,r2,r3,a,b,c,s1,s2,s3,area,tri_area,s;
        cin>>r1>>r2>>r3;
        c = (r1+r2)*1.0;
        a = (r2+r3)*1.0;
        b = (r1+r3)*1.0;
        s1 = r1*r1 * (acos( (b*b + c*c - a*a) / (2*b*c) ) /2 );
        s2 = r2 * r2* (acos( (a*a + c*c - b*b) /(2*a*c) ) / 2 );
        s3 = r3 *r3* (acos( (a*a + b*b - c*c) / (2*a*b) ) / 2 );
        s = (a+b+c)/2;
        tri_area = sqrt(s*(s-a)*(s-b)*(s-c));
        area = tri_area - s1 - s2 - s3;
        printf("Case %d: %.10f\n",k++,area);
    }
}
