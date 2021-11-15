#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,sum=1;
    cout<<"请输入一个非负整数";
    cin>>a;
    if(a==0||a==1) cout<<1;//将特殊情况分开处理
    else 
    {
        while(a>=2) //循环求阶乘
        {
            sum=sum*a;
            a=a-1;
        }
        cout<<sum;
    }
    return 0;
}