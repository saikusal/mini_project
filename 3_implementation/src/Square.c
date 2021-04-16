#include "calculator.h"





/**
 * @brief  function to find squares of a number
 * 
 * @param a operand1
 * @return int  it returns the output value
 */
int Square(int a)
{
    int (*square)(int)=&Square;
    if(a==0)
    return 0;
    else if(a<0)
    return a*a;
    else
    return a*a;
}
