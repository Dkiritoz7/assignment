#include <bits/stdc++.h>
using namespace std;
int main()
{
	int year,month;
	cin>>year>>month;
	if((year%4==0&&year%100!=0)||year%400==0)
	{
	  switch(month)
	  {
		  case 1: cout<<"31"<<endl; break;
		  case 2: cout<<"29"<<endl; break;
		  case 3: cout<<"31"<<endl; break;
		  case 4: cout<<"30"<<endl; break;
		  case 5: cout<<"31"<<endl; break;
		  case 6: cout<<"30"<<endl; break;
		  case 7: cout<<"31"<<endl; break;
		  case 8: cout<<"31"<<endl; break;
		  case 9: cout<<"30"<<endl; break;
		  case 10: cout<<"31"<<endl; break;
		  case 11: cout<<"30"<<endl; break;
		  case 12: cout<<"31"<<endl; break;
	  }
	}
	return 0;
}