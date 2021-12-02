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
          int get1() {return year;}
          int get2() {return month;}
          int get3() {return day;}
         bool isWeekend()
         {
            if((year%4==0&&year%100!=0)||(year%400==0))
            {
                if(month==2) 
                {
                    if(day<=29&&day>=1) return 1;
                    else return 0;
                }
            }
            if(day>31||day<=0) return 0;
            if(month>12||month<=0) return 0;
            if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
            {
                if(day<=31&&day>=1) return 1;
                else return 0;
            }
            if(month==4||month==6||month==9||month==11)
            {
                if(day<=30&&day>=1) return 1;
                else return 0;
            }
            if(month==2)
            {
                if(day<=28&&day>=1) return 1;
                else return 0;
            }
            return 1;
         }
         int sub(Date d)
         {
           int sum=0;
             if(year!=d.year)
             {
               int count=0,count1=0,count2=0,a=0,b=0;
               int minus=0;
               int smallerYear,smallerMonth,smallerDay;
               int largerYear,largerMonth,largerDay;
               if(year<d.year) 
               {
                   smallerYear=year;
                   largerYear=d.year;
                   largerMonth=d.month;
                   smallerMonth=month;
                   largerDay=d.day;
                   smallerDay=day;
               }
               if(d.year<year) 
               {
                   smallerYear=d.year;
                   largerYear=year;
                   largerMonth=month;
                   smallerMonth=d.month;
                   largerDay=day;
                   smallerDay=d.day;
               }
               for(int i=smallerYear+1;i<largerYear;i++)
              {
                if((i%4==0&&i%100!=0)||(i%400==0))
                  count++;
              }
                   for(int j=1;j<largerMonth;j++)  
                 {
                     if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
                        count1++;
                     if(j==4||j==6||j==9||j==11) 
                       count2++;
                     if(j==2)
                     {
                       if((largerYear % 4 == 0 && largerYear % 100 !=0)||(largerYear % 400 ==0 ))
                         a=29;
                         else
                         a=28;
                      }
                  }
                  for(int j=12;j>smallerMonth;j--)  
                 {
                     if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
                        count1++;
                     if(j==4||j==6||j==9||j==11) 
                       count2++;
                     if(j==2)
                     {
                       if((smallerYear % 4 == 0 && smallerYear % 100 !=0)||(smallerYear % 400 ==0 ))
                         b=29;
                         else
                         b=28;
                    }
                  }
                  if(smallerMonth==1||smallerMonth==3||smallerMonth==5||smallerMonth==7||smallerMonth==8||smallerMonth==10||smallerMonth==12)
                  {
                     minus=31;
                  }
                  if(smallerMonth==4||smallerMonth==6||smallerMonth==9||smallerMonth==11)
                  {
                     minus=30;
                  }
                  sum=(largerYear-smallerYear-1)*365+count+count1*31+count2*30+a+largerDay+minus+b-smallerDay;
                }
                if(year==d.year)
                {
                  int count1=0,count2=0,a=0,minus=0;
                  int smallerMonth,smallerDay;
                  int largerMonth,largerDay;
                  if(month!=d.month)
                  {
                  if(month<d.month)
                  {
                      largerMonth=d.month;
                      smallerMonth=month;
                      largerDay=d.day;
                      smallerDay=day;
                  }
                  if(d.month<month)
                  {
                      largerMonth=month;
                      smallerMonth=d.month;
                      largerDay=day;
                      smallerDay=d.day;
                  }
                    for(int j=smallerMonth+1;j<largerMonth;j++)  
                 {
                     if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
                        count1++;
                     if(j==4||j==6||j==9||j==11) 
                       count2++;
                     if(j==2)
                     {
                       if((year % 4 == 0 && year % 100 !=0)||(year % 400 ==0 ))
                         a=29;
                         else
                         a=28;
                      }
                  }
                  if(smallerMonth==1||smallerMonth==3||smallerMonth==5||smallerMonth==7||smallerMonth==8||smallerMonth==10||smallerMonth==12)
                  {
                     minus=31;
                  }
                  if(smallerMonth==4||smallerMonth==6||smallerMonth==9||smallerMonth==11)
                  {
                     minus=30;
                  }
                  sum=count1*31+count2*30+largerDay+minus-smallerDay+a;
                }
                }
                if(year==d.year&&month==d.month)
                {
                    if(day>d.day) sum=day-d.day;
                    if(day<d.day) sum=d.day-day;
                    if(day==d.day) sum=0;
                }
                return sum;
        }
};
class Time
{
    private:
      int hour,minute,second;
    public:
      void setTime(int a,int b,int c)
      {
        hour=a;
        minute=b;
        second=c;
      }
      int get1() {return hour;}
      int get2() {return minute;}
      int get3() {return second;}
      int sub(Time t)
      {
        int sum=0;
        int largerHour,largerMinute,largerSecond;
        int smallerHour,smallerMinute,smallerSecond;
        if(hour!=t.hour)
        {
          int count=0;
          if(hour<t.hour)
          {
          largerHour=t.hour;
          smallerHour=hour;
          largerMinute=t.minute;
          smallerMinute=minute;
          largerSecond=t.second;
          smallerSecond=second;
          }
           if(hour>t.hour)
          {
          largerHour=hour;
          smallerHour=t.hour;
          largerMinute=minute;
          smallerMinute=t.minute;
          largerSecond=second;
          smallerSecond=t.second;
          }
         count=largerHour-smallerHour-1;
         sum=count*60*60+largerMinute*60+largerSecond+(60-smallerMinute-1)*60+60-smallerSecond;
        }
       if(hour==t.hour)
       {
         if(minute>t.minute)
         {
           largerMinute=minute;
           smallerMinute=t.minute;
           largerSecond=t.second;
           smallerSecond=second;
         }
          if(minute<t.minute)
          {
           largerMinute=t.minute;
           smallerMinute=minute;
           largerSecond=second;
           smallerSecond=t.second;
          }
         sum=(largerMinute-smallerMinute-1)*60+largerSecond+60-smallerSecond;
       }
       if(hour==t.hour&&minute==t.minute) 
       {
         if(second>t.second) sum=second-t.second;
         if(second<t.second) sum=t.second-second;
         if(second==t.second) sum=0;
       }
        return sum;
      }
};
template <class T>
bool compare(T t1,T t2)
{
  int first1,second1,third1;
  int first2,second2,third2;
  first1=t1.get1();
  second1=t1.get2();
  third1=t1.get3();
  first2=t2.get1();
  second2=t2.get2();
  third2=t2.get3();
  if(first1!=first2)
  {
    if(first1<first2) return 1;
    if(first1>=first2) return 0;
  }
  if(first1==first2)
  {
    if(second2!=second1)
    {
     if(second1<second2) return 1;
     if(second1>=second2) return 0;
    }
    if(second1==second2)
    {
      if(third1<third2) return 1;
      if(third1>=third2) return 0;
    }
  }
}
int main()
{
    Date d1,d2;
    d1.setDate(2019,3,1);
    d2.setDate(2019,3,28);
    cout<<d1.isWeekend()<<endl;
    cout<<d1.sub(d2)<<endl;
    Time t1,t2;
    t1.setTime(4,30,10);
    t2.setTime(13,9,22);
    cout<<t1.sub(t2)<<endl;
    if(compare(d1,d2))
    {
      cout<<"yes";
    };
    return 0;
}