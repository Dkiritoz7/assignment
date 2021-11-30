#include <bits/stdc++.h>
using namespace std;
int transform1(int x);
int transform2(int y);
int main()
{
    cout<<"Fahrenheit equivalents of Celsius temperatures:"<<endl;
    for(int i=1;i<=4;i++)
    {
        cout<<"Celsius Fahrenheit"<<"\t";
    }
    cout<<endl;
    for(int j=0;j<=9;j++)
    {
        cout<<"      "<<j;
        cout<<"         "<<transform1(j);
        cout<<"           "<<j+25;
        cout<<"         "<<transform1(j+25);
        cout<<"           "<<j+50;
        cout<<"        "<<transform1(j+50);
        cout<<"           "<<j+75;
        cout<<"        "<<transform1(j+75);
        cout<<endl;
        if(j>=9)
        {
          for(int z=10;z<=24;z++)
          {
            cout<<"     "<<z;
            cout<<"         "<<transform1(z);
            cout<<"           "<<z+25;
            if(z+25>=38) cout<<"        "<<transform1(z+25);
            else cout<<"         "<<transform1(z+25);
            cout<<"           "<<z+50;
            cout<<"        "<<transform1(z+50);
             cout<<"           "<<z+75;
            cout<<"        "<<transform1(z+75);
            cout<<endl;
          }
        }
       
    }
   cout<<"Celsius temperatures of Fahrenheit equivalents:"<<endl;
    for(int i=1;i<=4;i++)
    {
        cout<<"Fahrenheit equivalents"<<"\t";
    }
    cout<<endl;
    for(int j=32;j<=49;j++)
    {
        cout<<"      "<<j;
        cout<<"         "<<transform2(j);
        cout<<"           "<<j+45;
        cout<<"         "<<transform2(j+45);
        cout<<"           "<<j+90;
        cout<<"        "<<transform2(j+90);
        cout<<"           "<<j+135;
        cout<<"        "<<transform2(j+135);
        cout<<endl;
        if(j>=49)
        {
            for(int z=50;z<=76;z++)
          {
            cout<<"      "<<z;
            cout<<"        "<<transform2(z);
            if(z+45>=100) 
            {
                cout<<"          "<<z+45;
                cout<<"         "<<transform2(z+45);
            }
            else 
            {
                cout<<"           "<<z+45;
                cout<<"         "<<transform2(z+45);
            }
            cout<<"           "<<z+90;
            cout<<"        "<<transform2(z+90);
            cout<<"           "<<z+135;
            cout<<"        "<<transform2(z+135);
            cout<<endl;
          }
        }
    }
    return 0;
    }
int transform1(int x)
{
    int z;
    z=x*1.8+32;
    return z;
}
int transform2(int y)
{
    int z;
    z=(y-32)/1.8;
    return z;
}

/////思考与反思：简单方法实在是想不出来了 采用了暴力打表 QAQ
/////////////  但他告诉了我 可以先按一般情况输出 之后根据自己需求 找不符合条件的位置进行修改