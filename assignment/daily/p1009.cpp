#include <bits/stdc++.h>
using namespace std;

int main()
{
    int flag[256]={0};
    char str[100];
    char str1[100]={0};
    char a[100]={0};
    cin.getline(str,99);
    cin.getline(str1,99);
    int j=0;
    for(int i=0;str[i]!=0;i++)
    {
        if(flag[str[i]]==0) a[j++]=str[i];
        flag[str[i]]=1;
    }
    for(int i=0;str1[i]!=0;i++)
    {
        if(flag[str1[i]]==0) a[j++]=str1[i];
        flag[str1[i]]=1;
    }
    cout<<a;
    return 0;
}