#include <bits/stdc++.h>
using namespace std;
void move(int getone,int putone);
void hanoi(int n,int one,int two,int three);
int main()
{
    int n;
    cin>>n;
    hanoi(n,1,2,3);
    return 0;
}
void move(int getone,int putone)
{
    cout<<getone<<"->"<<putone<<endl;
}
void hanoi(int n,int one,int two,int three)
{
    if(n==1) move(one,three);
    else{
        hanoi(n-1,one,three,two);
        move(one,three);
        hanoi(n-1,two,one,three);
    }
}

/////有些问题十分抽象，我们不能立刻反应出来，此时我们可以先列几个最开始的例子。
/////然后寻找其中规律即可。当n值增大时，只是复杂度发生了改变，实际上函数的递归调用还是一样的。