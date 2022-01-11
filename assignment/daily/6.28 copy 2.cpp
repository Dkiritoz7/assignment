#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
	char a[] = "hello";
	char b[] ="c++!";
	char *arr[]={a,b};
	char *pa=*arr;
	cout<<pa<<endl;
	cout<<*pa++<<endl;
	cout<<++*pa<<endl;
	pa=*(arr+1);
	cout<<pa<<endl;
	system("pause");
	return 0;
}