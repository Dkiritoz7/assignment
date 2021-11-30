#include <bits/stdc++.h>
using namespace std;
int gcd(int x,int y);
int gcd0(int x,int y);
void gcd0(int &x,int &y,int &max);
int gcd2(int m,int n);
int main()
{
    int max=0;
    int a,b;
    cout<<"Enter two integers:";
    cin>>a>>b;
    while(a!=-1||b!=-1)
    {
        cout<<"The greatest common divisor of ";
        cout<<a<<" and "<<b<<" is ";
        gcd0(a,b,max);
        cout<<gcd(a,b)<<endl;
        cout<<"Enter two integers:";
        cin>>a>>b;
    }
    return 0;
}
int gcd2(int x,int y)
{
    int max=0;
    int cnt=1;
    int smaller=0;
    if(x>=y) smaller=y;
    if(x<=y) smaller=x;
    int a[1000]={0};
    for(int i=1;i<=smaller;i++)
    {
        if(x%i==0&&y%i==0)
        {
            a[cnt]=i;
            cnt++;
        } 
    }
    for(int j=1;j<cnt;j++)
    {
        if(max<a[j]) max=a[j];
    }
    return max;
}
void gcd0(int &x,int &y,int &max)
{
    int smaller=0;
    if(x>=y) smaller=y;
    if(x<=y) smaller=x;
    for(int i=1;i<=smaller;i++)
    {
        if(x%i==0&&y%i==0)
        {
            max=i;
        } 
    }
}
int gcd3(int m,int n)
{
    int a[10000]={0};
    int remainder=0;
    int smaller=0;
    int larger=0;
    int cnt=1;
    if(m>=n) 
    {
        smaller=n;
        larger=m;
    }
    if(m<=n)
    {
        smaller=m;
        larger=n;
    } 
    remainder=larger%smaller;
    a[cnt]=remainder;
    if(a[1]==0) return larger;
    while(remainder!=0)
    {
         cnt++;
         remainder=smaller%remainder;
         a[cnt]=remainder;
    }
    return a[cnt-1];
}
int gcd(int x,int y)
{
    int smaller=0;
    int remainder=0;
    if(x>=y) smaller=y;
    if(x<=y) smaller=x;
    for(int i=1;i<=smaller;i++)
    {
        if(x%i==0&&y%i==0) remainder=i;
    }
    return remainder;
}
//问题与思考：对函数中取地址符的使用有了更深理解，取地址符可以连同main函数中的那个数据一起改变，不加取地址符的话
///////////不会同时改变