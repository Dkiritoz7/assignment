#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(int j=1;j<=4;j++)
    {
        cout<<endl;
      for(int i=1;i<=17;i++)
      {
          if(i%9==0)  cout<<endl<<" "; 
          else cout<<"*"<<" ";
      }
    }
    return 0;
}

//反思 可以用俩个while的嵌套循环做题