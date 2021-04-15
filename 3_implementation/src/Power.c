#include  "main.h"

int Power(int a, int b)
{
    int (*power)(int , int)= &Power;
   
    if(b==0)
    return Power_Zero;
    else
    {
        int pow=1;
        for(int i=a;i<=b;i++)
        {
            pow=pow*i;
        }
        return pow;
    }
}