#include  "main.h"

int  Division(int a, int b)
{
    int (*divide)(int , int)= &Division;
    if(b==0)
    return Error_div_by_Zero;
    else if(b<0)
    return Negative_number;
    else
    return a/b;
}