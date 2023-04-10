#include <iostream>
using namespace std;

int main(){
    int k,r,num=0;
    cin>>k>>r;
    for(int i=1;i<10;i++)
    {
        if( (k*i) % 10== 0 ||(k*i % 10) == r )
        {
            num=i;
            break;
        }
    }
    cout<<num;
}