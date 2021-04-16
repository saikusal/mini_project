#include "calculator.h"


 int (*minus)(int,int)=&Subtraction;
 int Subtraction(int a ,int b)
{
    return a-b;
}