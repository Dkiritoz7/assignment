#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(int counter1=1;counter1<=10;counter1++)
    {
        int counter2;
        counter2=counter1;
        for(;counter2>=1;counter2--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int counter3=10;counter3>=1;counter3--)
    {
        int counter4;
        counter4=counter3;
        for(;counter4>=1;counter4--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int counter5=10;counter5>=1;counter5--)
    {
        for(int counter6=10;counter6>=1;counter6--)
        {
             if(counter6>counter5) cout<<" ";
             if(counter6<=counter5) cout<<"*";
        }
        cout<<endl;
    }

    for(int counter7=1;counter7<=10;counter7++)
    {
        for(int counter8=10;counter8>=1;counter8--)
        {
            if(counter8>counter7) cout<<" ";
            if(counter8<=counter7) cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}