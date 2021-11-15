#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,d=0,e; //定义a为输入的二进制整数，d为控制第二个while循环的数
    cin>>a;      //e为在求出输入整数的位数时再次充当输入的a值的数
    e=a;         //为第二个while循环作准备
    int i=0;
    int k=0;
    int sum=0,c=1; //定义c用于乘二进制分出来的各项数位进行求和
    while(a>=10)   //求出输入整数的位数
    {
        i++;
        a=a/10;
    }
    int b[i+1];   
    while(e>=10)  //将输入整数的各个位数放入数组中为之后求和做准备
    {
       d++;
       b[d]=e%10;
       e=e/10;
    }
    b[i+1]=e;
    while(k<=i)  //进行求和计算化为的十进制数大小
    {
        k++;;
        sum=sum+b[k]*c;
        c=c*2;
    }
    cout<<sum;
        return 0;
}

//反思与思考：在求位数时不可以把条件变为>=0,这样会导致结果出错。
            //同时对二进制与十进制之间的相互转化有了更深入的了解。
