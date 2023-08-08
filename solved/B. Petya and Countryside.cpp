#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int rec[n];
    for (size_t i = 0; i < n; i++)
    {
        cin>>rec[i];
    }
    
    int ans=0;
    for (size_t i = 0; i < n; i++)
    {
        int countl=0,countr=0;
        int tempr=rec[i];
        int templ=rec[i];
        for (size_t r = i+1; r < n; r++)
        {
            if(rec[r] <= tempr && r < n)
            {
                countr++;
                tempr=rec[r];
            }
            else
            break;
        }
        for (size_t l = i-1; l >= 0; l--)
        {
            if(rec[l] <= templ && l >= 0)
            {
                countl++;
                templ=rec[l];
            }
            else
            break;
        }
        if((countl+countr+1) > ans)
        ans=countl+countr+1; 
    }
    cout<<ans;
}