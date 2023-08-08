#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,l;
    cin>>n>>l;

    double pos[n];

    for (size_t i = 0; i < n; i++)
    {
        cin>>pos[i];
    }

    sort(pos,pos+n);
    double diff [n+1] ;
    diff[0]=pos[0]-0,diff[n]=l-pos[n-1];

    for (size_t i = 1; i < n; i++)
    {
        diff[i]=pos[i]-pos[i-1];
    }
    double temp = diff[0];
    double ans;
    for (size_t i = 1; i < n+1; i++)
    {
        if(diff[i] > temp)
        temp=diff[i];
    }
    if(diff[0]*2 > temp || diff[n]*2 > temp)
    {
        ans=max(diff[0],diff[n]);
    }
    else
    {
        ans=temp/2.000000000;
    }
    cout<<fixed<<setprecision(9)<<ans;
}