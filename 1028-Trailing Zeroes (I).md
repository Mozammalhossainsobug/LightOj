# Problem statment
We know what a base of a number is and what the properties are. For example, we use decimal number system, where the base is 10 and we use the symbols - {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}. But in different bases we use different symbols. For example in binary number system we use only 0 and 1.

Now in this problem, you are given an integer. You can convert it to any base you would want to. But the condition is that if you convert it to any base then the number in that base should have at least one trailing zero, that means a zero at the end.

For example, in decimal number system 2 doesn't have any trailing zero. But if we convert it to binary then 2 becomes (10)2 and it contains a trailing zero. Given this task, you have to find the number of bases where the given number contains at least one trailing zero. You can use any base from two to infinity.

# Input
Input starts with an integer T (≤ 10000), denoting the number of test cases.

Each case contains an integer N (1 ≤ N ≤ 1012).

# Output
For each case, print the case number and the number of possible bases where N contains at least one trailing zero.

# Sample Input
```
3
9
5
2
```
# Sample Output
```
Case 1: 2
Case 2: 1
Case 3: 1
```

# Notes
For 9, the possible bases are: 3 and 9. Since in base 3; 9 is represented as 100, and in base 9; 9 is represented as 10. In both bases, 9 contains a trailing zero.

# Solution in C++
```
/**************************************************************************************
*                                       Coder :                                       *
                                    Mozammal_Hossain
*                                   (Nil_paracetamol)                                   *
                               mozammalruet@gmail.com                               |
**************************************************************************************/
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

//data_type_compressions :
#define     ll                              long long int
#define     ull                             unsigned long long int
#define     ui                              unsigned int
//STL :
#define     vi                              vector<int>
#define     vb                              vector<bool>
#define     vs                              vector<string>
#define     vl                              vector<ll>
#define     si                              set<int>
#define     sl                              set<ll>
#define     ip                              pair<int,int>
#define     lp                              pair<ll,ll>
#define     sip                             pair<string,int>
#define     slp                             pair<string,ll>
#define     cip                             pair<char,int>
#define     clp                             pair<char,ll>
#define     vip                             vector<ip>
#define     PQ                              priority_queue
#define     vlp                             vector<lp>
#define     hashmap                         unordered_map
#define     msi                             multiset<int>
#define     msl                             multiset<ll>
#define     pb                              push_back
#define     spb                             insert
#define     erase_duplicates(x)             x.erase(unique(all(x)),x.end());
#define     all(x)                          x.begin(),x.end()
#define     all_0(x)                        memset(x,0,sizeof(x))
#define     all_neg(x)                      memset(x,-1,sizeof(x))
#define     all_1(x)                        memset(x,1,sizeof(x))
//I/O :
#define     Faster                          ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define     Read(x)                         freopen(x,"r",stdin)
#define     Write(x)                        freopen (x,"w",stdout)
#define     PI                              acos(-1)
#define     take_the_array_INT(x,o,n)       for(int i=o;i<=n;i++){scanf("%d",&x[i]);}
#define     take_the_array_LL(x,o,n)        for(int i=o;i<=n;i++){scanf("%lld",&x[i]);}
#define     take_the_array_DBL(x,o,n)       for(int i=o;i<=n;i++){scanf("%lf",&x[i]);}
#define     print_the_array_INT(x,o,n)      for(int i=o;i<=n;i++){printf("%d ",x[i]);}printf("\n");
#define     print_the_array_LL(x,o,n)       for(int i=o;i<=n;i++){printf("%lld ",x[i]);}printf("\n");
#define     cin_the_array(x,o,n)            for(int i=o;i<=n;i++){cin>>x[i];}
#define     cout_the_array(x,o,n)           for(int i=o;i<=n;i++){cout<<x[i]<<" ";}cout<<endl;
#define     __lcm(a,b)                      (a/__gcd(a,b)*b)
#define     int_in(x)                       scanf("%d",&x)
#define     ll_in(x)                        scanf("%lld",&x)
#define     dbl_in(x)                       scanf("%lf",&x)
#define     char_in(x)                      scanf(" %c",&x)
#define     str_in(x)                       scanf("%s",&x)
#define     int_in2(x,y)                    scanf("%d %d",&x,&y)
#define     int_in3(x,y,z)                  scanf("%d %d %d",&x,&y,&z)
#define     ll_in2(x,y)                     scanf("%lld %lld",&x,&y)
#define     ll_in3(x,y,z)                   scanf("%lld %lld %lld",&x,&y,&z)
#define     int_out(x)                      printf("%d",x)
#define     ll_out(x)                       printf("%lld",x)
#define     char_out(x)                     printf("%c",x)
#define     str_out(x)                      printf("%s",x)

//extras :
#define     INF                             LLONG_MAX
#define     in_range(i,x,y)                 for(int i=x;i<=y;i++)
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)


using namespace __gnu_pbds;
using namespace std;

#define m 1000010

vl primes(m,0),siv(m,0);
ll cnt=0;

void sieve()
{
    ll i,j;
   // cout<<primes.size()<<endl;
   // cout<<siv.size()<<endl;
    for(i=3; i<1e6+10; i+=2){
        if(!siv[i])
            for(j=i*i; j<1e6+10; j+=i+i)
                siv[j] = 1;

       // cout<<i<<endl;
    }

    primes[cnt++] = 2;
    for(i=3; i<m; i+=2)
        if(!siv[i]) primes[cnt++]=i;
    //cout<<"came"<<endl;
    return;
}

void solve(ll test)
{
    ll n,k,sum=1;
    cin >> n;
    for(ll i=0; i<m && primes[i]*primes[i]<=n; i++)
    {
        if(n%primes[i] == 0)
        {
            k=0;
            while(n%primes[i] == 0)
            {
                n/=primes[i];
                k++;
                if(n==0 || n==1)
                    break;
            }
            sum*=k+1;
        }
    }
    if(n!=1)
        sum*=2;

    cout<<"Case "<<test<<": "<<sum-1<<endl;
}
int main()
{
    sieve();
   // cout<<"came "<<endl;
    int test = 1;
    cin >> test;
    for(ll i = 1; i<=test; i++)
    {
        solve(i);
    }
}

```

