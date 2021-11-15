#include <bits/stdc++.h>
using namespace std;
int main()
{
    double d=1;
    double sum=1;
    int k=1; //求x的几次方
    int a,x; //输入
    int e; //为第二个while循环作指示数
    int i=1;
    cin>>a;
    cin>>x;
    while(i<=x)
    {
        e=i;
        while(e>=1)
        {
            sum=sum*e;
            e=e-1;
            k=k*x; //k为计算x的几次方的值
        }
        d=d+k/sum;
        sum=1;  //将sum和k重新赋为1进行下一轮循环
        k=1;
        i++;
    }
    cout<<fixed<<setprecision(a)<<d;
    return 0;
}
//反思与思考：当使用循环求阶乘时，当其中嵌套的while循环循环一次完毕后要记得将
//数变为初始值，这样才能保证不会出问题。