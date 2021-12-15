#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=5,b=8;
    int t;
    int *pa=NULL;
    t=a;
    a=b;
    pa=&t;
    b=*pa;
    cout<<a<<b;
    return 0;
}