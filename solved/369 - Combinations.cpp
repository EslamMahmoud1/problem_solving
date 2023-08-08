#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b, a%b);
}

int arrn [100];
int arrm [100];
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,m;
    while (cin>>n>>m)
    {
        if(n == 0 && m == 0)
            break;
        int64_t sumn=1,summ=1;
        int thr;
        
        if(m <= n-m)
            thr=m;
        else
        thr=n-m;
        for (size_t i = 0; i < thr; i++)
        {
            arrn[i]=(n-i);
            arrm[i]=(thr-i);
        }
        for (size_t i = 0; i < thr; i++)
        {
            for (size_t j = 0; j < thr; j++)
            {
                if(gcd(arrn[i],arrm[j]) != 1)
                {
                    int g = gcd(arrn[i],arrm[j]);
                    arrn[i]/=g,arrm[j]/=g;
                }
            }
        }
        for (size_t i = 0; i < thr; i++)
        {
            sumn = sumn * arrn[i];
            summ = summ * arrm[i];
        }
        cout<<n<<" things taken "<<m<<" at a time is "<<(sumn/summ)<<" exactly."<<'\n';
    }
    return 0;
}