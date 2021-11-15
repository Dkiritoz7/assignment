#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100]; //存成绩
    int i=0;
    int b[5]={0};//储存各个级别的个数
     while(1)
     {
        cin>>a[i];
        if(a[i]==-1) break; //判断何时停止录入成绩
        switch(a[i]/10)
        {
            case 10: b[0]++; break;
            case 9:  b[0]++; break;
            case 8:  b[1]++; break;
            case 7:  b[2]++; break;      
            case 6:  b[3]++; break;
            case 5:  b[4]++; break; 
            case 4:  b[4]++; break;
            case 3:  b[4]++; break; 
            case 2:  b[4]++; break;
            case 1:  b[4]++; break;
            case 0:  b[4]++; break;
        }
        i++;
     }
     for(int counter=0;counter<=4;counter++)
     {
         cout<<b[counter]<<endl;
     }
    return 0;
}


//////思考与反思：明天case后只能跟数字或字符，不能接不等式，对switch有更深理解。