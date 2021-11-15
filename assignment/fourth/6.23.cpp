#include <bits/stdc++.h>
using namespace std;
void image(int &x,char &y);
int main()
{
    int a;
    char stde;
    cin>>a>>stde;
    image(a,stde);
    return 0;
}
void image(int &x,char &y)
{
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=x;j++) 
        {
            cout<<y;
        }
        cout<<endl;
    }
}