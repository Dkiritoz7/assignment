#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
	char str[100000],word[100][1000];//依次是读入字符串，单词表（自0开始）
	int i, start,end,word1=0,length[1000],count[100],top;//依次是循环数，单词开始坐标，单词结束坐标，单词现总数，单词对应长度，单词出现数，字符串长度
	for (i = 0;i <= 99;i++)count[i] = 0;//初始化
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
			start = str2 - str1;//记录开始坐标
		}
		if (*str2 == ' '&&space == false)//空格开始，单词结束
		{
			space = true;//位于空格
			end = str2 - str1;//记录结束坐标
			char *str3;	
			bool new1 = true;//是否是一个新的单词
			for (i = 1;i <= word1;i++)
			{
				str3 = str1 + start;//指向单词开始微点 
				while (str3 < str1 + end)//一个一个比对
				{
					if (word[i][str3 - str1 - start] != *str3)break;//某个字母不一样
					if (length[i] != end - start)break;//长度不一肯定不一样
					str3++;
				}
				if (str3 == str1 + end)//所有的比对都相同且长度相同
				{
					new1 = false;//是老单词
					count[i] ++;//对应计数器+1
				}	
			}
			if (new1 == true)//是新单词
			{
				word1++;//单词书+1
				length[word1] = end - start;//单词长度
				count[word1] = 1;//单词计数
				for (str3 = str1 + start;str3 < str1 + end;str3++)
					word[word1][str3 - str1-start] = *str3;//存储单词
			}
		}
		str2++;
	}
	int ma = 1;
	for (i = 1;i <= word1;i++)
		if (count[i] > count[ma])
			ma = i;//找到出现次数最多的（前者优先）
	cout << word1<<endl;//输出总单词数
	for (i = 0;i < length[ma];i++){//输出
		cout << word[ma][i];//0输出单词
	}
	cout << endl << count[ma];
}
