#include <bits/stdc++.h>
using namespace std;

void pairsort(int64_t a[], int64_t b[], int64_t n)
{
    pair <int64_t,int64_t> pairt[n];

    for (size_t i = 0; i < n; i++)
    {
        pairt[i].first=a[i];
        pairt[i].second=b[i];
    }

    sort(pairt,pairt+n);

    for (size_t i = 0; i < n; i++)
    {
        a[i]=pairt[i].first;
        b[i]=pairt[i].second;
    }
}

int main()
{
   int64_t n,m;
   cin>>n>>m;
   int64_t box[m],match[m];
   int64_t count=0;

   for (size_t i = 0; i < m; i++)
   {
        cin>>box[i]>>match[i];
   }
   pairsort(match,box,m);
   
   int64_t ite=m-1;
   while (n > 0 && m > 0)
   {
        if(n - box[ite] >= 0)
        {
            count+=box[ite]*match[ite];
            n-=box[ite];
        }
        else
        {
            count+=n*match[ite];
            n-=n;
        }
        ite--;m--;
   }
    cout<<count;
}