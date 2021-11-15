#include <bits/stdc++.h>
using namespace std;
int main()
{
    double d=1;
    double sum=1;//定义sum为阶乘
    int a;
    int x;
    int i=1;
    cin>>a;
    while(i<=a)
    {
        x=i;
        while(x>=1) //求阶乘
        {
            sum=sum*x;
            x=x-1;
        }
        d=d+1/sum; //计算e
        sum=1;    //计算为每次的阶乘后sum归1
        i++;
    }
    cout<<fixed<<setprecision(a)<<d;
    return 0;
}