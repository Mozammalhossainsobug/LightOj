#include<bits/stdc++.h>
using namespace std;
#define f(i,n,a) for(j = i;j<n;j=j+a)
#define ll  long long

double solve(double mid,double x,double y)
{
    double a = sqrt(x*x - mid*mid);
    double b = sqrt(y*y - mid*mid);

    return ((a*b) / (b+a));
}


int main()
{
 ll test,i,cnt;
 double x,y,c,lo,hi,mid;
 cin>>test;
for(i=1;i<=test;i++)
 {
     cin>>x>>y>>c;
    lo = 0.0, hi = min(x,y) , cnt = 100;
    while(cnt--)
    {
          mid = (lo + hi) / 2.0;
          if(solve(mid,x,y)<=c)
             hi = mid;
          else
            lo = mid;
    }
    cout<<"Case "<<i<<": ";
    printf("%.10f\n",hi);
 }
return 0;
}
