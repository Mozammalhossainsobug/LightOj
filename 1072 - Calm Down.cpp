#include<bits/stdc++.h>
#define PI 3.141592653589793238
using namespace std;
int main()
{
   // ios_base::sync_with_stdio(false);
   // cin.tie(NULL);
    long long test,n,k=1;
    double R,r,theta;
    cin>>test;
    while(test--)
    {
        cin>>R>>n;

        theta = sin(PI / n);
        r = (R  * theta) / (1 + theta);
        cout<<"Case "<<k++<<": ";
        printf("%.10f\n",r);

    }
}
