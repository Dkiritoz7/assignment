#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    
    const char *article[5]={"the ","a ","one ","some ","any "};
    const char *noun[5]={"boy ","girl ","dog ","town ","car "};
    const char *verb[5]={"drove ","jumped ","ran ","walked ","skipped "};
    const char *preposition[5]={"to ","from ","over ","under ","on "};
    srand(time(0));
    for(int i=0;i<=19;i++)
    {
        string final;
        for(int j=0;j<=5;j++)
        {
          int RandomNumber=rand()%5;
          if(j==0) 
          {
              int z=1;
              char a=*article[RandomNumber]-32;
              final=final+a;
              while(*(article[RandomNumber]+z)!=' ')
              {
               final=final+*(article[RandomNumber]+z);
               z++;
              }
              final=final+" ";
          }
           if(j==1) 
          {
              int z=0;
              while(*(noun[RandomNumber]+z)!=' ')
              {
               final=final+*(noun[RandomNumber]+z);
               z++;
              }
              final=final+" ";
          }
           if(j==2) 
          {
             int z=0;
              while(*(verb[RandomNumber]+z)!=' ')
              {
               final=final+*(verb[RandomNumber]+z);
               z++;
              }
              final=final+" ";
          }
           if(j==3) 
          {
             int z=0;
              while(*(preposition[RandomNumber]+z)!=' ')
              {
               final=final+*(preposition[RandomNumber]+z);
               z++;
              }
              final=final+" ";
          }
          if(j==4) 
          {
             int z=0;
              while(*(article[RandomNumber]+z)!=' ')
              {
               final=final+*(article[RandomNumber]+z);
               z++;
              }
              final=final+" ";
          }
           if(j==5) 
          {
              int z=0;
              while(*(noun[RandomNumber]+z)!=' ')
              {
               final=final+*(noun[RandomNumber]+z);
               z++;
              }
              final=final+" ";
          }
        }   
        cout<<final<<endl;
    }
    return 0;
 }