#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(int counter1=1;counter1<=5;counter1++)//将整个图形分为上下俩部分，第一个循环为上部分图形。
    {
        for(int counter2=5;counter2>=1;counter2--)//将上部分看成俩个三角形相拼，第一个循环输出左半部分。
        {
            if(counter2>counter1) cout<<" ";
            if(counter2<=counter1) cout<<"*";
        }
        int counter3=counter1-1;       //第二个循环输出右半部分。
        for(;counter3>=1;counter3--) cout<<"*";
        cout<<endl;
    }
    for(int counter4=4;counter4>=1;counter4--)//第二个大的循环输出下半部分图形。
    {
        cout<<" ";
        for(int counter5=4;counter5>=1;counter5--)//与上半部分同理，分成俩个三角形
        {
            if(counter5<=counter4) cout<<"*";
            if(counter5>counter4) cout<<" ";
        }
        int counter6=counter4-1;
        for(;counter6>=1;counter6--) cout<<"*";
        cout<<endl;
    }
    return 0;
}



//问题与思考：处理大的图形时，可以将其进行适量分割，分割成数个简单的图形进行求解。
////////////同时for循环的多次套用可以简化代码。