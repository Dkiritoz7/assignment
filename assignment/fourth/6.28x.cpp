#include <bits/stdc++.h>
using namespace std;
int sum=0;
int j=1;
bool perfect(int x);
int main()
{
    int b[10000]={0};  ///储存完全数的因子
    int cnt=1;          //为输出完全数因子做准备
    for(int i=1;i<=1000;i++)
    {
       if(perfect(i))
       {
           cout<<i<<"=";
           for(int z=1;z<=i;z++)       ////分离完全数因子
          {
             if(i%z==0) 
            {
                b[cnt]=z;
                cnt++;
            }
          }
          for(int k=1;k<cnt-2;k++) cout<<b[k]<<"+";    ///输出因子
           cout<<b[cnt-2];
           cout<<endl;
       }
    }
    return 0;
}
bool perfect(int x)
{
    int sum=0;
    int j=1;
    for(int i=1;i<=x;i++)
    {
        if(x%i==0) 
        {
            sum=sum+i;
            j++;
        }
    }
      sum=sum-x;
      if(sum==x) return true;        //bool类型返回true 和false
      if(sum!=x) return false;
}

/////思考与问题：bool类型返回时如果用这个程序一样的if的话还是会有警告，有没有什么办法把警告去掉。
////////////// bool类型返回true和false或者1或0
////////////// 将输出的因子放入bool类型函数中可以改为void函数一次性输出，代码可能会简化。