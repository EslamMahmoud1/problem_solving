#include <bits/stdc++.h>
using namespace std;

int main()
{
   double rec [10][4];
   char in;
   int r=0;                 //rec number
   int p=0;                 //point number    


   while (cin>>in)
   {
        if(in=='*')
        break;
        cin>>rec[r][0]>>rec[r][1]>>rec[r][2]>>rec[r][3];
        r++;
   }
   double x,y;
   while (1)
   {
        cin>>x>>y;
        if(x==9999.9 && y==9999.9)
        break;

        bool flag = false;
        for (size_t i = 0; i < r; i++)
        {
            if((x > rec[i][0]) && (x < rec[i][2]) && (y < rec[i][1]) && (y > rec[i][3]))
            {
                flag = true;
                cout<<"Point "<<p+1<<" is contained in figure "<<i+1<<'\n';
            }
        } 
        if(flag == false)
        cout<<"Point "<<p+1<<" is not contained in any figure"<<'\n';
        p++;
   }
}