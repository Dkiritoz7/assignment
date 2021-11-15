#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[4];
	cin>>a;
    int c,d;
	for(int i=1;i<=4;i++) //求位数
    {
		b[i]=a%10;
		a=a/10;
	}
    c=b[2];//换位
	b[2]=b[1];
    b[1]=c;
    d=b[3];
    b[3]=b[4];
    b[4]=d;
    int j=1;
    while(j<=4)
    {
        if(b[j]<=6) b[j]=b[j]+3; //加密数小于6时加3为原数
        if(b[j]>=8) b[j]=b[j]-7; //加密数为8 9 时减去7为原数
        if(b[j]==0) b[j]=3;      //为3时 0为原数
        cout<<b[j];
        j++;
    }
    return 0;
}

//反思：换位时可以再定义一个变量 通过这个中间量完成换位
//加密数相关问题可以用数学方法找规律解决