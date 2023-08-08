#include <bits/stdc++.h>
using namespace std;

int64_t sum(vector<int64_t> & cost,int l,int r)
{
    if(l == 1)
        return cost[r-1];
    return cost[r-1] - cost[l-2];
}

int main()
{
    int n,m;
    cin>>n;

    vector <int64_t> cost;
    vector <int64_t> sortCost;
    int input;
    for (size_t i = 0; i < n; i++)
    {
        cin>>input;
        cost.push_back(input);
    }
    sortCost=cost;
    sort(sortCost.begin(),sortCost.end());

    for (size_t i = 1; i < n; i++)
    {
        cost[i]=cost[i-1]+cost[i];
        sortCost[i]=sortCost[i-1]+sortCost[i];
    }
    
    cin>>m;
    int64_t allans[m];
    for (size_t i = 0; i < m; i++)
    {
        int type,l,r;
        int64_t ans;
        cin>>type>>l>>r;

        if(type == 1)
        {
            ans=sum(cost,l,r);
        }
        else if(type == 2)
        {
            ans=sum(sortCost,l,r);
        }
        allans[i]= ans;
    }
    for (size_t i = 0; i < m; i++)
    {
        cout<<allans[i]<<'\n';
    }
    
}   