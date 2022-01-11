#include <iostream>
#include <iomanip>
#include <cstdlib>
#include<ctime>
#include<string>
using namespace std;
int main()
{
	char str[100000],word[100][1000];
	int length[1000]={0},cnt[1000]={0};
	int top,word1=0;
	int start,end;
	gets(str);
	bool space=true;
	char *str1=str,*str2=str;
	while(*str2!=0)
	{
		str2++;
	}
	*str2=' ';
	top=str2-str1;
	str2=str1;
	while(str2-str1<=top)
	{
		if(*str2!=' '&&space==true)
		{
			space=false;
			start=str2-str1;
		}
		if(*str2==' '&&space==false)
		{
			space=true;
			end=str2-str1;
			length[word1]=end-start;
			bool new1=true;
			char *str3;
			str3=str1+start;
		    for(int i=1;i<=word1;i++)
			{
				while(str3<str1+end)
				{
					if(*str3!=word[i][str3-str1-start]) break;
					if(length[i]!=length[word1]) break;
					str3++;
				}
				if(str3==str1+end)
				{
					new1=false;
					cnt[i]++;
				}
			}
			if(new1==true)
			{
				word1++;
				length[word1]=end-start;
				cnt[word1]=1;
			   for(int j=0;j<length[word1];j++)
			   {
				   word[word1][j]=*str3;
				  str3++;
			  }
			}
		}
		str2++;
	}
	int final=1;
	for(int i=1;i<=word1;i++)
	{
		if(length[i]>=length[final]) final=i;
	}
	for(int j=0;j<length[final];j++)
	{
		cout<<word[final][j];
	}
	cout<<endl;
	cout<<cnt[final];
	system("pause");
	return 0;
}