#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5],b[5];
    double sum=0;
    for(int counter1=0;counter1<5;counter1++)  cin>>a[counter1]; //进行a的输入
    for(int counter2=0;counter2<5;counter2++)  cin>>b[counter2]; //进行b的输入
    for(int counter3=0;counter3<5;counter3++) //判断编号对应的单价同时进行销售额的求取
    {
         switch(a[counter3])
         {
           case 1: sum=sum+2.98*b[counter3]; break;
           case 2: sum=sum+4.50*b[counter3]; break;
           case 3: sum=sum+3.98*b[counter3]; break;
           case 4: sum=sum+4.49*b[counter3]; break;
           case 5: sum=sum+6.87*b[counter3]; break;
         }
    }
    cout<<sum;
    return 0;
}

//思考与反思：for循环中可以套用switch进行比较简化代码。