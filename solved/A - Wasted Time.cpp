#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,k;
    cin>>n>>k;
    double total=0;
    int cord[n][2];
    for (size_t i = 0; i < n; i++)
    {
        cin>>cord[i][0]>>cord[i][1];
    }
    for (size_t i = 1; i < n; i++)
    {
        total+=sqrt(pow((cord[i][1]-cord[i-1][1]),2)+(pow(cord[i][0]-cord[i-1][0],2)));
    }
    cout<<setprecision(10)<<(total/50)*k;
    
}