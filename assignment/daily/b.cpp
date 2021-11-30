#include <bits/stdc++.h>
using namespace std;


int main()
{
    int x=5;
    int j=1;
    int sum=0;
    int a[10000];
    int counter;
    for(int i=1;i<x;i++)
    {
	   for(counter=1;counter<i;counter++)
		{
        if(i%counter==0) 
           {
            a[j]=counter;
            j++;
           }
		if(counter==i-1)
		  {
		    for(int z=1;z<=j-1;z++)
            {
                sum=sum+a[z];
            }
		     if(sum==i) cout<<"yes";
		  }
        }
    }
}