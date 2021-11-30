#include <bits/stdc++.h>
using namespace std;
int judge1(int x);
int judge2(int y);
int main()
{
    cout<<"The prime numbers from 1 to 10000 are:";
    int number=0;
    for(int i=2;i<=10000;i++)
    {
        if(judge2(i)==1) 
        {
            number++;
            cout<<"\t"<<i<<"\t";
        }
    }
    cout<<"Total of "<<number<<"prime numbers between 1 and 10000";
    return 0;
}
int judge1(int x)
{
    for(int j=2;j<=x/2;j++)
    {
        if(x%j==0) 
        {
         return 0;     ////如果出现整除的数 直接跳出循环 return 0 不需要进行后面的判断
        }
    }
    return 1;
}
int judge2(int y)
{
    for(int j=2;j<=sqrt((int)(y));j++)
    {
        if(y%j==0) 
        {
         return 0;
        }
    }
    return 1;
}

//////问题与思考：为什么只需要到根号n
//////////////  一个数n如果不是素数那么一定存在若干因子（不少于2个）
//////////////  假设最小的因子是p，那么p*p <= n 所以p < 根号n