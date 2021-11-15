#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(a+b>c&&a+c>b&&b+c>a) cout<<"可构成三角形";
    else cout<<"不可构成三角形";
    return 0;
}

//a+b>c&&a+c>b&&b+c>a判断三角形的条件