#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
	char str[100000],word[100][1000];//依次是读入字符串，单词表（自0开始）
	int start[100000]={0},end[100000]={0},word1=0,length[1000],top;//依次是循环数，单词开始坐标，单词结束坐标，单词现总数，单词对应长度，单词出现数，字符串长度
	gets(str);//读入字符串与，以“\0”（ascall=0）结尾
	char *str1 = str, *str2 = str;
	while (*str2 != 0){
		str2++;//寻找上线
	}
	*str2 = ' ';//更改结尾值（可被单词识别程序识别）
	top = str2 - str1;//上限值
	str2 = str1;//清0
	bool space = true;//检测空格的消失
	while (str2-str1 <= top)
	{
		if (*str2 != ' '&&space == true)//空格结束，单词开始
		{
			space = false;//不再位于空格
			start[word1]= str2 - str1;//记录开始坐标
		}
		if (*str2 == ' '&&space == false)//空格开始，单词结束
		{
			space = true;//位于空格
			end[word1] = str2 - str1;//记录结束坐标
			char *str3;	
			length[word1] = end[word1] - start[word1];//单词长度
			str3=str1+start[word1];
			for(int j=0;j<length[word1];j++)
			{
				word[word1][j]=*str3;
				str3++;
			}
		}
		str2++;
	}
	for(int i=0;i<=word1;i++)
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