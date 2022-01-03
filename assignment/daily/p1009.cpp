#include <bits/stdc++.h>
using namespace std;
int max(int *a,int score[][4],int row)
{
    int maxNumber=0;
    for(int i=0;i<row;i++)
    {
        a=&score[i][0];
        for(int j=0;j<=3;j++)
        {
            if(maxNumber<=*a) maxNumber=*a;
            a++;
        }
    }
    return maxNumber;
}
int main()
{
    int *a=NULL;
    int score[3][4]={1,2,3,4,5,6,7,888,9,10,11,12};
    cout<<max(a,score,3);
}