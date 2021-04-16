#include "calculator.h"





/**
 * @brief  function to find the Power of the number
 * 
 * @param a operand1
 * @param b operand2
 * @return int  it returns the output value
 */
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
