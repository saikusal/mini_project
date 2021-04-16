#include "calculator.h"




/**
 * @brief  function to find factorial of a number
 * 
a * @param a operand1
 * @param b operand2
 * @return int  it returns the output value
 */
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
