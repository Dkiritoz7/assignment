#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;  //定义单个数
    int b[5]; //定义数组存放各位的数字
    cin>>a;
    for(int i=0;i<5;i++)//将数字分离
      {
         b[i]=a%10;
         a=a/10;  
      }
    if(b[0]==b[4]&&b[1]==b[3]) cout<<"yes";//判断回文条件
    else cout<<"no";
    return 0;
}

//反思：运用数组可以减少定义变量，同时整数除法会直接舍掉之后的小数。