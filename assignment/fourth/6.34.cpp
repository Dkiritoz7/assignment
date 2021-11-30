#include <bits/stdc++.h>
using namespace std;
char button;
int GuessNumber;
int number;
int getnumber();
void compare(int ,int );
int main()
{
    number=getnumber();     ///得到随机数
    cout<<"I  have  a  number  between  1  and  1000．"<<endl;
    cout<<"Can  you  guess  my  number?"<<endl;
    cout<<"Please  type  your  first  guess．"<<endl;
    cin>>GuessNumber;
    compare(GuessNumber,number);
    return 0;
}
int getnumber()
{
    int RandomNumber;
    srand((unsigned)time(NULL));
    RandomNumber=rand()%1000+1;
    return RandomNumber;
}
void compare(int x,int y)
{
    if(x==y)
    {
        cout<<"Excellent! You guessed the number!"<<endl;
        cout<<"Would you like to play again (y or n)?"<<endl;
        cin>>button;       //定义button作为是否开始下一次游戏的按钮，为之后判断作铺垫
        if(button=='y')
        {
            number=getnumber();
            cin>>GuessNumber;
            compare(GuessNumber,number);
        }
        if(button=='n') exit(0);  //因为是void函数 不能用return0 直接跳出 改用exit(0)
    }
    while(x!=y)
    {
        if(x<y) 
        {
            cout<<"Too low. Try again."<<endl;
            cin>>GuessNumber;
            compare(GuessNumber,number);
        }
        if(x>y)
        {
            cout<<"Too high. Try again."<<endl;
            cin>>GuessNumber;
            compare(GuessNumber,number);
        }
    }
}

////问题与思考：对随机数的使用有了更深的理解，同时学会了一种新的终止程序的方法exit(0) 同return0的作用类似。