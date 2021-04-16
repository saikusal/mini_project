#include  "calculator.h"


/**
 * @brief  function to division of two numbers
 * 
 * @param a operand1
 * @param b operand2
 * @return int  it returns the output value
 */

int Division(int a ,int b)
{
     int (*div)(int,int)=&Division;
     if(b==0)
    {
        return -1;
    }
    else if(b<0)
    {
        return -1;
    }
    else
    return a/b;
}
