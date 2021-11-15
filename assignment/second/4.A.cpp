#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int m,n;//定义头数和脚数
    int x,y;//定义鸡的数目和兔子的数目
    cin>>m>>n;//输入头数和脚数
    if(n==m*2) //判断全是鸡的情况
      {
          x=m;
          y=0;
      }
    else      //以下为不为鸡时的情况，假设全为鸡
    {
       y=(n-2*m)/2; //算出多出的脚数进而求出兔子数目
       x=m-y; //利用兔子数目求出鸡的数目
    }
    cout<<x<<"只鸡，"<<y<<"只兔子"; //输出结果
    return 0;
}


//反思：可以用极限思路求解问题