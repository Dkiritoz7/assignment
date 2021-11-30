#include <bits/stdc++.h>
using namespace std;
char button;
void square(int size1,char stde1);
void diamond(int size2,char stde2);
void triangle(int size3,char stde3);
int main()
{
    int a;
    int size;
    char character;
    cout<<"Choose the shape to graph"<<endl;
    cout<<"1 for square"<<endl;
    cout<<"2 for diamond"<<endl;
    cout<<"3 for triangle"<<endl;
    cout<<"?";
    cin>>a;
    cout<<"Enter a character and size"<<endl;
    cin>>character>>size;
    switch(a)
    {
        case 1 : square(size,character); break;
        case 2 : diamond(size,character); break;
        case 3 : triangle(size,character); break;
    }
    cout<<"Do you want to continue (y or n)";
    cin>>button;
    while(button=='y')                                     //button为是否开始下一次程序的按钮
        {
            cout<<"Choose the shape to graph"<<endl;
            cout<<"1 for square"<<endl;
            cout<<"2 for diamond"<<endl;
            cout<<"3 for triangle"<<endl;
            cout<<"?";
            cin>>a;
            cout<<"Enter a character and size"<<endl;
            cin>>character>>size;
            switch(a)
             {
                case 1 : square(size,character); break;
                case 2 : diamond(size,character); break;
                case 3 : triangle(size,character); break;
             }
            cout<<"Do you want to continue (y or n)";
            cin>>button;
            if(button=='n')  return 0;
        }
}
void square(int size1,char stde1)
{
   for(int i=1;i<=size1;i++)
   {
       for(int j=1;1<=size1;j++)
       {
           cout<<stde1;
       }
       cout<<endl;
   } 
}
void triangle(int size3,char stde3)
{
   for(int i=1;i<=size3;i++)
   {
       for(int j=size3;j>=1;j--)
	   {
		if(j>i) cout<<" ";
        if(j<=i) cout<<stde3;
	   }
	   for(int z=i-1;z>=1;z--)
	   {
		   cout<<stde3;
	   }
       cout<<endl;
   }
}
void diamond(int size2,char stde2)
{
    int k=1;
    for(int i=0;i<(size2+1)/2;i++)                // 边长与所输入的size2的关系是边长等于（size2+1）/2 之后进行打印菱形的操作
    {
		for(int j=0;j<(size2+1)/2-i-1;j++)
        {
			cout<<" ";
		}
		for(int j=0;j<k;j++){
			cout<<stde2;
		}
		k+=2;
		for(int j=0;j<(size2+1)/2-i-1;j++){
			cout<<" ";
		}
		cout<<endl;
	}
    k=1+2*((size2+1)/2-2);
	for(int i=0;i<(size2+1)/2-1;i++)
    {
		for(int j=0;j<=i;j++)
        {
			cout<<" ";
		}
		for(int j=0;j<k;j++)
        {
			cout<<stde2;
		}
		k-=2;
		for(int j=0;j<=i;j++)
        {
			cout<<" ";
		}
		cout<<endl;
	}
}



/////思考与反思：在实现程序根据输入的y n 来进行下一次的时候可以重新定义一个char变量
////////////// 来控制，用if while判断语句终止
//////////////知道了菱形的边长与行数的关系是边长等于（行数+1）/2