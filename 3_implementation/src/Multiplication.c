#include "calculator.h"




/**
 * @brief  function to Multiplication of two numbers
 * 
 * @param a operand1
 * @param b operand2
 * @return int  it returns the output value
 */
int Multiplication(int a ,int b)
{
     int (*multiply)(int,int)=&Multiplication;
     if(a==0||b==0)
    {
        return 0;
    }
    else if(a<0||b<0)
    {
        return -1;
    }
    else
    return a*b;
}
