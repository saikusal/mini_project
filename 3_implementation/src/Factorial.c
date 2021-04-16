#include "calculator.h"

int Factorial(int a)
{
     int (*factorial)(int)=&Factorial;
     if(a==0||a==1)
    {
        return 1;
    }
    else if(a<0)
    {
        return -1;
    }
    else
    {
        int i,fact=1;
        for(i=1;i<=a;i++)
        {
            fact=fact*i;
        }
        return fact;
    }
}