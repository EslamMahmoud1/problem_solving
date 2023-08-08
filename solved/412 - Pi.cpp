#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b, a%b);
}

int main()
{
    int n;
    while (cin>>n)
    {
        if(n == 0)break;
        int num[n];
        int comp=0,ncf=0;
        double pi;
        for (size_t i = 0; i < n; i++)
        {
            cin>>num[i];
        }
        for (size_t i1 = 0; i1 < n; i1++)
        {
            for (size_t i2 = i1+1; i2 < n; i2++)
            {
                comp++;
                if(gcd(max(num[i1],num[i2]),min(num[i1],num[i2])) == 1)
                {
                    ncf++;
                }
            }
        }
        if(ncf>0)
        {
            printf("%0.6f\n",sqrt(6.000000*(n*(n-1)/2)/ncf));
        }
        else
        cout<<"No estimate for this data set."<<'\n'; 
    }
    return 0;
}