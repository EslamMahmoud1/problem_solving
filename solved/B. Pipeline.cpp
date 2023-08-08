#include <bits/stdc++.h>
using namespace std;

int64_t eval(int64_t k)
{
    return (k*(k+1)/2);
}

int64_t bin_search(int64_t k , int64_t n)
{
    int64_t start =0,end=k+1;
    while (start < end)
    {
        int64_t mid=start+(end-start)/2;
        int64_t sum = eval(k)-eval(mid-1);
        if(sum > n )start=mid+1;
        else if(sum < n)end=mid;
        else return k-mid+1; 
    }
    return k-start+2;
}

int main()
{
    int64_t n,k;
    cin>>n>>k;

    if(n == 1)
    cout<<0;
    else if(n < k)
    cout<<1;
    else
    {
        k--;
        n--;
        if(eval(k) < n)
        cout<<-1;
        else
        cout<<bin_search(k,n);
    }
}