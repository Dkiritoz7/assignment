#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,year,mouth,day;
    int count=0,count1=0,count2=0,a=0,sum=0;
    //count求的是在两者之间有多少闰年
    //count1求的是到所给月份之间包含几个31天的月份
    //count2求的是在其间有几个30天的月份
    //a代表的是所给的那一年的二月份的天数
    //sum是从1980年的第一开始到所给日期的总天数
    scanf("%d%d%d",&year,&mouth,&day);
    if(year>=1980&&mouth>0&&mouth<=12&&day>0&&day<=31)
    {
       for(i=1980;i<year;i++)
       {
       if((i%4==0&&i%100!=0)||(i%400==0))//判断是否为闰年
        count++;
       }
       for(j=1;j<mouth;j++)  //进行本年的求解
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
       sum=(year-1980)*365+count+count1*31+count2*30+a+day;
       printf("%d",sum);
    }
    else
        printf("输入有误");
    return 0;
}


//问题与思考：求解问题要将问题思考全面，比如闰年和31天 30天的月份。
////////////同时深刻认识到了||与&&的区别与用途。