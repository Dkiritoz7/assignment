#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[100]={0};
    char arr1[100]={0};
    int number;
    int p1,p2,p3;
    int p;
    int n=0;
     cin.getline(arr,99);
    cin>>p1>>p2>>p3;
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
                 for(int j=1;j<number;j++)
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
                 for(int j=1;j<number;j++)
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
                 for(int j=number-1;j>=1;j--)
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