#include <bits/stdc++.h>
using namespace std;
class c
{
  private:
     int Length,width;
  public:
     Rectangle()
     {}
     Rectangle(int a,int b)
     {
       Length=a;
       width=b;
     }
     void set(int a,int b)
     {
       Length=a;
       width=b;
     }
     int Area()
     {
       return Length*width;
     }
};
int main()
{
  Rectangle d1;
  d1.set(100,50);
  cout<<d1.Area();
  return 0;
}