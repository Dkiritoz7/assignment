#include <bits/stdc++.h>
using namespace std;
int a[1000000]={0};
double b[1000000]={0};
int fibonacci1(int n);
double fibonacci2(int n);
int main()
{
    double number;
    double n;
    cin>>n;
    for(int j=1;j<=n;j++)
    {
     number=fibonacci2(j);
     cout<<"fibonacci("<<j<<") ="<<setprecision(1)<<fixed<<number;
     cout<<endl;
    }
    return 0;
}
int fibonacci(int n)
{
     a[1]=0;
     a[2]=1;
    for(int i=3;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    return a[n];
}
double fibonacci2(int m)
{
    b[1]=0;
    b[2]=1.0;
    for(int i=3;i<=m;i++)
    {
        b[i]=b[i-1]+b[i-2];
    }
    return b[m];
}

////////使用递归方法可以简化代码。
////////例如函数实现加法 如果没有到最后的第一个和第二个相加 就使用函数相加
////////对如何输出小数位数有了更深认识 setprecision(1)<<fixed 使用这个玩意
