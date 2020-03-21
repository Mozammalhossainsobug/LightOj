#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,k=1,ox,oy,ax,ay,bx,by;
    double O,A,B,theta,arc,OC,hx,hy;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d %d %d %d %d",&ox,&oy,&ax,&ay,&bx,&by);
        B = sqrt(  (ox-bx) * (ox-bx)   +   (oy-by) * (oy-by)   );
        O = sqrt(  (ax-bx) * (ax-bx)   +   (ay-by) * (ay-by)   );
        A = sqrt(  (ox-ax) * (ox-ax)   +   (oy-ay) * (oy-ay)   );
        hx = (ax+bx)/2.0;
        hy = (ay+by)/2.0;
        OC = sqrt(  (ox-hx) * (ox-hx)   +   (oy-hy) * (oy-hy)   );
        theta = 2.0*acos(OC/B);
        arc = A * theta;
        printf("Case %d: %f\n",k,arc);
        k++;
    }

    return 0;
}

