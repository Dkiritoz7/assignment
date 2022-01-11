#include <iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
	char str[100000],word[100][1000];
	int length[1000]={0};
	int top,word1=0;
	int start[1000]={0},end[10000]={0};
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
			word1++;
			start[word1]=str2-str1;
		}
		if(*str2==' '&&space==false)
		{
			space=true;
			end[word1]=str2-str1;
			length[word1]=end[word1]-start[word1];
			char *str3;
			str3=str1+start[word1];
			for(int j=0;j<length[word1];j++)
			{
				word[word1][j]=*str3;
				str3++;
			}
		}
		str2++;
	}
	for(int i=1;i<=word1;i++)
	{
		for(int j=0;j<=length[i];j++)
		{
			cout<<word[i][j];
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}