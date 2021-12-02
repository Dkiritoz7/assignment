#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={9,2,7,8,6};
    for(int i=0;i<=4;i++)
    {
      for(int j=4;j>=i+1;j--)
      {
        if(a[j]<=a[j-1])
        {
          int x=0;
          x=a[j];
          a[j]=a[j-1];
          a[j-1]=x;
        }
      }
    }
   for(int z=0;z<=4;z++)
   {
     cout<<a[z];
   }
    return 0;
}