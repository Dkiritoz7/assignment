#include <bits/stdc++.h>
using namespace std;
class Employee
{
    private:
       string name1,name2;
       int income;
    public:
      Employee(){;}
      void setName1(string a)
      {
          name1=a;
      }
      void setName2(string b)
      {
          name2=b;
      }
      void setIncome(int c)
      {
          income=c;
          if(income<=0)
          {
              income=0;
          }
      }
      int getIncome()
      {
          return income;
      }
};

int main()
{
    string a="wang",b="dong",c="chao";
    Employee e1,e2;
    e1.setName1(a);
    e1.setName2(b);
    e1.setIncome(90000);
    e2.setName1(a);
    e2.setName2(c);
    e2.setIncome(900000);
    cout<<12*e1.getIncome()<<endl<<12*e2.getIncome()<<endl;
    return 0;
}