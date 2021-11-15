#include<iostream>
#include<cmath>
using namespace std;
int main()
{ 
	int year , month, day;
	int a[13]={-1,31,28,31,30,31,30,31,31,30,31,30,31};
 //((year%4==0)&&(year%100!=0))	||(year%400==0))
	do
	{
		cin>>year;
		if(year==-1 )break;
		cin>>month>>day;
		int y=1980,m=1,d=1,cnt=0;
		while(y!=year || m!=month || day!=d )
		{
			d=d+1;
			if(m!=2 && d>a[m]) 
			{
				d=1;m++;
			}
			else
			{
				if(((year%4==0)&&(year%100!=0))	||(year%400==0))
				{
					if(d>a[m]+1) {d=1;m++;}
				}
				else
					if(d>a[m])  {d=1;m++;}
			}
			if(m>12) 
			{
				m=1; y++;
			}
			++cnt;
		}
		cout<<cnt<<" days passed"<<endl;
	
	}while( 1);
	return 0;
} 
