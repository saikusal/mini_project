#include "calculator.h"




/**
 * @brief  function to find remainder of divided two numbers
 * 
 * @param a operand1
 * @param b operand2
 * @return int  it returns the output value
 */
int Modulus(int a ,int b)
{
     int (*modulo)(int,int)=&Modulus;
     if(b==0)
    {
        return -1;
    }
    else
    {
        int rem=0;
        rem=a%b;
        return rem;
    }
}
