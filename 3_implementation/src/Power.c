#include "calculator.h"

int Power(int a ,int b)
{
    int (*power)(int,int)=&Power;
    if(b==0)
    {
        return 1;
    }
    else
    {
        int i,pow=1;
        for(i=pow;i<=b;i++)
        {
            pow*=a;
        }
        return pow;
    }
}