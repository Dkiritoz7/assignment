#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(int side1=1;side1<=500;side1++)
    {
        for(int side2=1;side2<=500;side2++)
        {
            for(int hypotenuse=1;hypotenuse<=500;hypotenuse++)
            {
                if(side1*side1+side2*side2==hypotenuse*hypotenuse) 
                {
                    cout<<side1<<" "<<side2<<" "<<hypotenuse<<endl;
                }
            }
        }
    }
    return 0;
}



////思考与反思：for循环嵌套处理暴力求解的许多数的问题时有优势
///////////////同时发现三个循环在此题中的次序问题（谁在前谁在后）貌似不影响最后结果，
///////////////可能时循环时把所有情况都循环一遍的原因。