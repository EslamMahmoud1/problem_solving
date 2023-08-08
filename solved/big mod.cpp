#include <bits/stdc++.h>
using namespace std;

int64_t mod (int64_t b ,int64_t p ,int64_t m)
{
    if(p == 0)return 1 % m;
    int64_t temp = mod(b,p/2,m);
    temp = (temp * temp) % m;
    if(p % 2 == 1)
    temp = (b % m) * temp;
    return temp % m;
}

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int64_t b,p,m;
    
    while (cin>>b>>p>>m)
    {
        cout<<mod(b,p,m)<<'\n';
    }
    return 0;
}