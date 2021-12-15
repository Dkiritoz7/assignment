#include <iostream>
using namespace std;
int main()
{
	char arr[100]={0};
	int wordstart[100]={0};
	int wordlen[100]={0};
	int sameNmuber[100]={0};
	int wordcnt=0;	        //wordcnt 为单词数
	int k,flag=0;           //flag用于判断之后是否有相同的单词
	int maxNumber=0;        //maxNumber为出现次数最多的单词的次数
    int p,finalNumber=0;    //finalnumber为出现次数最多的单词，p为字符串的长度
    int i=0;
	bool ischar=false;      //辅助分割一个一个的单词
	cin.getline(arr,99);
	for(k=0;arr[k]!=0;k++)     //求字符串的长度
    {
             p=k;
    }
	arr[p+1]=' ';             //给字符串最后加一个空格 便于之后判断
	for(int i=0;arr[i]!=0;i++)
	{
		if(arr[i]!=' '&&!ischar)     //判断单词开头
		{
			ischar=true;
			wordstart[wordcnt]=i;
			wordlen[wordcnt]++;
		}
		else if(arr[i]==' '&&ischar)     //判断单词结束
		{	
			wordcnt++;
			ischar=false;
		}
		else if(arr[i]==' '&&!ischar)    //判断单词结束
		{
			ischar=false;
		}
		else if(arr[i]!=' '&&ischar)     //计算单词中间的长度
		{
			ischar=true;
			wordlen[wordcnt]++;
		}
	}
	for(i=0;i<wordcnt;i++)
	{ 
		for(int m=i+1;m<wordcnt;m++)       //以下思路为将第一个之后的所有单词与第一个单词进行比较 有相同的便加
		{                                  //实现了相同单词的判断同时避免了之后相同单词和上个单词samenumber一样减少比较
			int largerLen=0;              
			if(wordlen[i]<=wordlen[m])  largerLen=wordlen[m];
			if(wordlen[i]>=wordlen[m])  largerLen=wordlen[i];     //j的终止设为长的那个 超过短的短的为空格不符合if
		    for(int j=0; j<largerLen; j++)
		    {
			    if(arr[wordstart[i]+j]==arr[wordstart[m]+j]) flag=1;  //flag辅助判断是否每个字母相同
			    if(arr[wordstart[i]+j]!=arr[wordstart[m]+j])
				{
					flag=0;
					break;
				}
		    }
		    if(flag==1&&sameNmuber[i]==0)   
			{
				sameNmuber[i]=sameNmuber[i]+1; 
			}        //samenumber初始值为0 但如果遍历到之后存在此处加1下个if加1
			if(flag==1&&sameNmuber[i]!=0)   
			{
				sameNmuber[i]=sameNmuber[i]+1;
			}      //之后正常每个加1
	    }	
	}
	sameNmuber[wordcnt-1]=1;
	for(i=wordcnt;i>=0;i--)               //因为要输出相同次数的第一个出现的单词，所以从后面遍历
	{
		if(maxNumber<=sameNmuber[i]) 
		{
			maxNumber=sameNmuber[i];
			finalNumber=i;
		}
	}
	cout<<wordcnt<<endl;
	for(int j=0; j<wordlen[finalNumber]; j++)
	{
		cout<<arr[wordstart[finalNumber]+j];
	}
	cout<<endl;
	cout<<sameNmuber[finalNumber]<<endl;
	return 0;
}
///////思考与反馈：懂得了判断的时候可以添加bool类型ischar的变量，用类似此题的方法实现字母之间的分割判断