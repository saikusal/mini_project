#include  "calculator.h"


/**
 * @brief  function to addition of two numbers
 * 
 * @param a operand1
 * @param b operand2
 * @return int  it returns the output value
 */
int Addition(int a, int b)
{
    int (*add)(int , int)= &Addition;
    
    return a+b;
}
