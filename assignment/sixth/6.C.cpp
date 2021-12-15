#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[100]={0};          //整体思路 分为6个情况考虑 arr存放输入的字符串 arr1存放经过变化之后的字符串
    char arr1[100]={0};
    int number;
    int p1,p2,p3;
    int p;         //p为输入字符串的长度
    int n=0;
    cin>>p1>>p2>>p3;
    cin>>arr;
    if(p3==1)
    {
        if(p1==1)
        {
               for(int k=0;arr[k]!=0;k++)
              {
                   p=k;
              }
           for(int i=0;i<=p;i++)
           {
              arr1[n]=arr[i];           //未出现-将输入的字符串复制到arr1里
              n=n+1; 
             if(arr[i]=='-')            //出现了-进行相关操作
             {
                   number=arr[i+1]-arr[i-1];  //计算number为之后添加字母作铺垫
                 if(number!=0)          //进行（5）的判断
                 {
                      n=n-1;            //因为上一步将-复制到了arr1里 所以此时-1 将他重新赋值
                 for(int j=1;j<number;j++)   //判断加的字母种类数
                 {
                   for(int k=1;k<=p2;k++)      //控制加的字母的个数
                   {  
                      arr1[n]=arr[i-1]+j;
                      n=n+1;
                   }
                 }
                 }
                  if(number<=0)     //（5）的特殊情况 直接复制
                 {
                      n=n-1;
                      arr1[n]='-';
                      n=n+1;
                 }
             }
          }
         }
         if(p1==2)
        {
               for(int k=0;arr[k]!=0;k++)
              {
                   p=k;
              }
           for(int i=0;i<=p;i++)
           {
              arr1[n]=arr[i];
              n=n+1;
             if(arr[i]=='-')
             {
                 number=arr[i+1]-arr[i-1];
                 if(number!=0)
                 {
                      n=n-1;
                 for(int j=1;j<number;j++)
                 {
                   for(int k=1;k<=p2;k++)
                   {  
                      arr1[n]=arr[i-1]+j-32;      //将小写字母变为大写字母 此处改一下
                      n=n+1;
                   }
                 }
                 }
                  if(number<=0)
                 {
                      n=n-1;
                      arr1[n]='-';
                      n=n+1;
                 }
             }
          }
         }
         if(p1==3)
        {
               for(int k=0;arr[k]!=0;k++)
              {
                   p=k;
              }
           for(int i=0;i<=p;i++)
           {
              arr1[n]=arr[i];
              n=n+1;
             if(arr[i]=='-')
             {
                   number=arr[i+1]-arr[i-1];
                 if(number!=0)
                 {
                      n=n-1;
                 for(int j=1;j<number;j++)
                 {
                   for(int k=1;k<=p2;k++)
                   {  
                      arr1[n]='*';     //将小写字母变为“*”此处改一下
                      n=n+1;
                   }
                 }
                 }
                 if(number<=0)
                 {
                      n=n-1;
                      arr1[n]='-';
                      n=n+1;
                 }
             }
          }
         }
     }
     if(p3==2)
    {
        if(p1==1)
        {
               for(int k=0;arr[k]!=0;k++)
              {
                   p=k;
              }
           for(int i=0;i<=p;i++)
           {
              arr1[n]=arr[i];
              n=n+1;
             if(arr[i]=='-')
             {
                  number=arr[i+1]-arr[i-1];
                 if(number!=0)
                 {
                      n=n-1;
                 for(int j=number-1;j>=1;j--)   //因为里面添加的东西逆序 用--倒序存放 
                 {
                   for(int k=1;k<=p2;k++)
                   {  
                      arr1[n]=arr[i-1]+j;
                      n=n+1;
                   }
                 }
                }
                if(number<=0)
                {
                     n=n-1;
                    arr1[n]='-';
                   n=n+1;
                }
             }
          }
         }
         if(p1==2)
        {
               for(int k=0;arr[k]!=0;k++)
              {
                   p=k;
              }
           for(int i=0;i<=p;i++)
           {
              arr1[n]=arr[i];
              n=n+1;
             if(arr[i]=='-')
             {
                  number=arr[i+1]-arr[i-1];
                 if(number!=0)
                 {
                      n=n-1;
                   for(int j=number-1;j>=1;j--)
                    {
                     for(int k=1;k<=p2;k++)
                     {  
                        arr1[n]=arr[i-1]+j-32;
                        n=n+1;
                     }
                   }
                 }
                 if(number<=0)
                 {
                      n=n-1;
                    arr1[n]='-';
                     n=n+1;
                 }
             }
          }
         }
         if(p1==3)
        {
               for(int k=0;arr[k]!=0;k++)
              {
                   p=k;
              }
           for(int i=0;i<=p;i++)
           {
              arr1[n]=arr[i];
              n=n+1;
             if(arr[i]=='-')
             {
                  number=arr[i+1]-arr[i-1];
                 if(number!=0)
                 {
                      n=n-1;
                 for(int j=number-1;j>=1;j--)
                 {
                   for(int k=1;k<=p2;k++)
                   {  
                      arr1[n]='*';
                      n=n+1;
                   }
                 }
                }
                if(number<=0)
                {
                     n=n-1;
                     arr1[n]='-';
                    n=n+1;
                }
             }
          }
         }
     }
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i];
    }
    return 0;
}



///思考与反馈：明白了有些题可能情况多 但每种情况大体思路一样 此时解决其中一种情况 然后复制代码 改其中一小段就行
//////////// 明白了以后逆序输出存放的题可以从循环体下手 用自减循环