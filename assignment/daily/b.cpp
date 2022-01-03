#include <bits/stdc++.h>
using namespace std;
class number;
class number
{
    private:
       int realNumber,imaginaryNumber;
    public:
      void setrealNumber(int a)
       {
           realNumber=a;
       }
       void setimaginaryNumber(int b)
       {
          imaginaryNumber=b;
       }
      int getrealnumber() {
        return  realNumber;
      }
      int getimaginaryNumber() {
          return imaginaryNumber;
      }
      int mod(int realNumber,int imaginaryNumber)
      {
          int final;
          final=realNumber*realNumber+imaginaryNumber*imaginaryNumber;
          return final;
      }
      void printf(int realNumber,int imaginaryNumber)
      {
          cout<<realNumber<<"+"<<imaginaryNumber<<"i";
      }
};
int main()
{
    int x,y;
    srand(time(0));
    x=rand()%9+1;
    y=rand()%9+1;
    cout<<x<<y<<endl;
    number n1;
    n1.setrealNumber(x);
    n1.setimaginaryNumber(y);
    cout<<n1.mod(x,y);
    n1.printf(x,y);
    return 0;
}