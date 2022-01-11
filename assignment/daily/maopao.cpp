#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
int main()
{
	bool flag;
	char str[1000],str2[1000];
	gets(str);
	gets(str2);
	cout<<str;
	cout<<str2; 
	for(int i =0;str[i]!=0;i++)
	{
		if(str[i]==str2[0])
		{
			for(int j=0;str2[j]!=0;j++)
			{
				if(str2[j]==0) 
				{
					return 0;
				}
				if(str[i+j]!=str2[j]) 
				{
					flag=false;
					break;
				}
				if(str[i+j]==str2[j]) flag=true;
			}
		}

	}
	if(flag==true) cout<<"yes"<<endl;
	if(flag==false) cout<<"no"<<endl;
	system("pause");
	return 0;
}