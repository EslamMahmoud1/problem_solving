#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n>>a;
    int city [n];
    int count=0;
    for (size_t i = 0; i < n; i++)
    {
        cin>>city[i];    
    }
    
    if(city[a-1] == 1) count++;
    int l=a-2,r=a;

    while (l >= 0 || r < n)
    {
        int lp=0,rp=0;
        if(l >= 0) lp=1;
        if(r < n) rp=1;
        
        if(lp+rp == 2)
        {
            if(city[l]+city[r] == 2) count+=2;
        }   
        else if(lp+rp == 1)
        {
            if(lp == 1)
            count+=city[l];
            if(rp == 1)
            count+=city[r];
        }
        l--;r++;    
    }
    cout<<count;
}