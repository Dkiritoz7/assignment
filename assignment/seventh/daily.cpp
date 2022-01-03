#include <iostream>
using namespace std;
bool cmpare( char* x, char * y)// 比较
{
    int i=0;
	for(;x[i]!=0&&y[i]!=0;i++)
		if(x[i]!=y [i] ) return false;
	if(x[ i]==y[ i])	
		return true ;
	else 
		return false;
}
int main()
{
	char  arr[100]={0};
	char * pword[100]={NULL};  
	int wordcnt=0;
	cin.getline(arr,100);
	int i=0;
	bool ischar=false;
	
	while(arr[i]!=0) 
	{
		if(arr[i]!=' '&&!ischar)
		{
			pword[wordcnt]=&arr[i];
			wordcnt++;
			ischar=true;
		}
		else if(arr[i]==' ')
		{
			ischar=false;
			arr[i]=0;
		}
		else
		{
			ischar=true;
		}
		i++;
	}
     cout<<wordcnt<<endl;
	int max=0,mindex=0;
	for(int k=0;k<wordcnt;k++)
	{
		int cnt=0;
		for(int t=0; t<wordcnt; t++)
			if(cmpare(pword[k],pword[t]) )cnt++;
			if(cnt>max)
			{
				max=cnt;mindex=k;
			}
	}
		cout<<pword[mindex]<<endl;
	cout<<max;
	cout<<endl;
	
	return 0;
}

