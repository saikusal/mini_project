#include "calculator.h"




/**
 * @brief  function to subtraction of two numbers
 * 
 * @param a operand1
 * @param b operand2
 * @return int  it returns the output value
 */
 int (*minus)(int,int)=&Subtraction;
 int Subtraction(int a ,int b)
{
    return a-b;
}
