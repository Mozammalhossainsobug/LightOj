Given an integer N, you have to prime factorize N! (factorial N).

## Input
Input starts with an integer T (≤ 125), denoting the number of test cases.

Each case contains an integer N (2 ≤ N ≤ 100).

## Output
For each case, print the case number and the factorization of the factorial in the following format as given in samples.

Case x: N = p1 (power of p1) * p2 (power of p2) * ...

Here x is the case number, p1, p2 ... are primes in ascending order.

## Sample
### Input
```
3
2
3
6
```
### Output
```
Case 1: 2 = 2 (1)
Case 2: 3 = 2 (1) * 3 (1)
Case 3: 6 = 2 (4) * 3 (2) * 5 (1)
```
### Notes
The output for the 3rd case is (if we replace spaces with .s) Case.3:.6.=.2.(4).*.3.(2).*.5.(1)

## Solution in c++
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

vector<int>prime;

bool is_prime(int n)
{
    if(n == 2)
        return true;
    for(int i=2; i*i<=n ;i++)
    {
        if(n%i == 0)
            return false;
    }

   return true;
}

void prime_finding()
{
   for(int i=2; i<=100; i++)
      if(is_prime(i))
         prime.pb(i);
}

void solve(int test)
{
   int n,tmpN;
   cin >> n;
   map<int,int>ans;

   for(int i=2; i<=n; i++){
        tmpN = i;
   while(tmpN>1)
   {
       for(int i=0; i<prime.size(); i++)
          if(tmpN%prime[i] == 0)
             ans[prime[i]]++,  tmpN/= prime[i];

   }
   }

   cout << "Case "<<test<<": "<<n<<" =";

   for(auto it=ans.begin(); it!= ans.end(); it++)
   {
       if(it != ans.begin())
        cout<<" *";

       cout <<" "<<it->first<<" ("<<it->second<<")";
   }

   cout<<endl;


}
int main()
{
  int test = 1;
  prime_finding();
  cin >> test;
  for(int i = 1; i<=test; i++)
  {
      solve(i);
  }
}



```

