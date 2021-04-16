#include "calculator.h"

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