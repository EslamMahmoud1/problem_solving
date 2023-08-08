#include <bits/stdc++.h>
using namespace std;

int taxi (int a,int b,int c,int d)
{
    int sum=a;
    while (a<c)
    {
        if(a+b > c)return c;
        a+=b;
        c-=d;
        sum=a;
    }
    return sum;
}

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    int sum = taxi(a,b,c,d);
    cout<<sum;
}