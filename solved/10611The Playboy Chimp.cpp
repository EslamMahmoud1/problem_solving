#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,q;
  cin>>n;
  int lady[n];
  for (size_t i = 0; i < n; i++)
  {
    cin>>lady[i];
  }
  cin>>q;
  int chimp[q];
  for (size_t i = 0; i < q; i++)
  {
    cin>>chimp[i];
  }
  for (size_t i = 0; i < q; i++)
  {
    int key=chimp[i];
    int start=0,end=n-1;

    while (start < end)
    {
        int mid = start+(end-start)/2;
        if(lady[mid] < key)start=mid+1;
        else end=mid;
    }
    for (size_t j = start; j < n-1; j++)
    {
        if(lady[j+1] == lady[j])
        end=j+1;
        else break;
    }
    
    if(lady[start] == key)
    {
        if(start ==0)
        cout<<"X "<<lady[end+1]<<'\n';
        else if (end==n-1)
        cout<<lady[start-1]<<" X"<<'\n';
        else
        cout<<lady[start-1]<<' '<<lady[end+1]<<'\n';
    }
    else
    {
        if(start ==0 && key<lady[0])
        cout<<"X "<<lady[end]<<'\n';
        else if (end==n-1 && key>lady[n-1])
        cout<<lady[start]<<" X"<<'\n';
        else
        cout<<lady[start-1]<<' '<<lady[end]<<'\n';
    }
  }
}