#include <iostream>
using namespace std;

int main()
{
    int n,counter=1;
    cin>>n;
    string *arr = new string[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i][1]==arr[i+1][0])
        counter++;
        
    }
    cout<<counter;
}