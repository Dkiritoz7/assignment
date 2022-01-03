#include <bits/stdc++.h>
using namespace std;
int main()
{
    string start;
    char *p=&start[0];
    string finalMonth;
    string month;
    char *pm=NULL;
    string day;
    char *pd=NULL;
    string year;
    char *py=NULL;
    int flag=0;
    cin>>start;
    while(*p!=0)
    {
        if(*p!='/'&&flag==0)
        {
           pm=p;
           p++;
        }
        if(*p=='/'&&flag==0)
        {
            p++;
            pd=p;
            pd++;
            flag=1;
        }
         if(*p=='/'&&flag==1)
        {
            p++;
            py=p;
            py++;
            flag=2;
        }
        if(*p!='/'&&flag==2)
        {
            py=p;
            py++;
        }
        p++;
    }
    switch(atoi(pm))
    {
        case 1 : finalMonth="January"; break;
        case 2 : finalMonth="February";break;
        case 3 : finalMonth="March";break;
        case 4 : finalMonth="April";break;
        case 5 : finalMonth="May";break;
        case 6 : finalMonth="June";break;
        case 7 : finalMonth="July";break;
        case 8 : finalMonth="August";break;
        case 9 : finalMonth="September";break;
        case 10 : finalMonth="October";break;
        case 11 : finalMonth="November";break;
        case 12 : finalMonth="December";break;
    }
    cout<<finalMonth<<" ";
     cout<<*(pd-1)<<*pd<<","<<*(py-4)<<*(py-3)<<*(py-2)<<*(py-1);
    return 0;
}