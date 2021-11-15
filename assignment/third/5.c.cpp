#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4];
    int sum;
    int i_;
    for(int i=1000;i<10000;i++)
    {
        i_=i;//取雷击数的各个位置数字
        for(int j=0;j<4;j++)
        {
            a[j]=i_%10;
            i_=i_/10;
        }
    sum=a[0]+a[1]*10+a[2]+a[3]*10;
    if(sum*sum==i) cout<<i<<endl;//判断雷击数的条件
    }
    return 0;
}

//////用数组可以简化变量的使用。