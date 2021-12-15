#include <bits/stdc++.h>
using namespace std;
void swap1(int &a ,int &b);
void function1(int a[],int size)
{
    for(int i=0;i<=size-1;i++)
    {
        for(int j=i+1;j<=size-1;j++)    ////实现从未排序部分选取最小值
        {
            int min=a[i];
            int counter=i;                 
            if(a[j]<min)
            {
               counter=j;
            }
            swap(a[i],a[counter]);    ///将最小值和未排序的第一个元素交换
    }
    }
}
void function2(int a[],int size)
{
    for(int i=0;i<=size-1;i++)
    {
        for(int j=i+1;j<=size-1;j++)
        {
            int min=a[i];
            int counter=i;
            if(a[j]<min)
            {
               counter=j;
            }
            swap(a[i],a[counter]);
        }
    }
    if(size-1>=1) return function2(a,size-1);   ///递归实现，return
}
void swap1(int &a ,int &b)
{
    int x=0;
    x=b;
    b=a;
    a=x;
}
void function3(int a[],int size)
{
    
     for(int j=0;j<=size-1;j++)
        {
            if(a[j]<=a[0]) swap1(a[j],a[0]);
        }
    for(int i=0;i<=size-1;i++)
    {
        for(int z=0;z<=i-1;z++)
        {
            if(a[i]>=a[z]&&a[i]<=a[z+1]) swap1(a[i],a[z+1]);
        }
    }
}
void function4(int a[],int size,int i)
{
    for(int j=0;j<=size-1;j++)
        {
            if(a[j]<=a[0]) swap1(a[j],a[0]);
        }
    for(int z=0;z<=i-1;z++)
        {
            if(a[i]>=a[z]&&a[i]<=a[z+1]) swap1(a[i],a[z+1]);
        }
    
   
    if(i<=size-2) return function4(a,size,i+1);
}

int main()
{
    int b[7]={1,9,5,3,25,11,0};
    int c[6]={5,8,6,7,9,10};
    int d[8]={9,7,6,5,4,5,10,15};
    int e[5]={5,7,8,6,6};
    function4(b,7,0);
    function1(c,6);
    function2(d,8);
    function3(e,5);
    for(int i=0;i<=6;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<=5;i++)
    {
        cout<<c[i]<<"  ";
    }
     cout<<endl;
     for(int i=0;i<=7;i++)
    {
        cout<<d[i]<<" ";
    }
     cout<<endl;
     for(int i=0;i<=4;i++)
    {
        cout<<e[i]<<" ";
    }
    return 0;
}