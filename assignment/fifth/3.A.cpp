#include <bits/stdc++.h>
using namespace std;
class Date;
class Time;
class Date
{
    private:
         int year,month,day;
    public:
         void setDate(int a,int b,int c)
         {
             year=a;
             month=b;
             day=c;
         }
         bool isWeekend()
         {
            if((year%4==0&&year%100!=0)||(year%400==0))
            {
                if(month==2) 
                {
                    if(day==29) return true;
                    if(day!=29) return false;
                }
            }
            if(day>31||day<=0) return false;
            if(month>12||month<=0) return false;
            if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
            {
                if(day==31) return true;
                else return false;
            }
            if(month==4||month==6||month==9||month==11)
            {
                if(day==30) return true;
                else return false;
            }
            if(month==2)
            {
                if(day==28) return true;
                else return false;
            }
         }
         int sub(Date d)
         {
             int count=0,count1=0,count2=0,a=0,sum=0;
             int smaller;
             int larger;
             if(year<d.year) 
             {
                 smaller=year;
                 larger=d.year;
                 month=d.month;
                 day=d.day;
             }
             if(d.year<year) 
             {
                 smaller=d.year;
                 larger=year;
             }
             for(int i=smaller;i<larger;i++)
            {
              if((i%4==0&&i%100!=0)||(i%400==0))//判断是否为闰年
                count++;
            }
                 for(int j=1;j<month;j++)  //进行本年的求解
               {
                   if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)//本年31天的月份的求解。
                      count1++;
                   if(j==4||j==6||j==9||j==11) //本年30天的月份
                     count2++;
                   if(j==2)//本年2月的天数
                   {
                     if((year % 4 == 0 && year % 100 !=0)||(year % 400 ==0 ))
                       a=29;
                       else
                       a=28;
                    }
                }
       sum=(larger-smaller)*365+count+count1*31+count2*30+a+day;
       return sum;
        }
};
int main()
{
    Date d1,d2;
    d1.setDate(1980,1,1);
    d2.setDate(2009,1,2);
    cout<<d1.sub(d2);
    return 0;
}