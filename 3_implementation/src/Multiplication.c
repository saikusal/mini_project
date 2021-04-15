#include  "main.h"

int Multiplication(int a, int b)
{
    int (*multiply)(int , int)= &Multiplication;
    
    if (a==0||b==0)
    return Pass;
    else if(a<0||b<0)
    return Negative_number;
    else
    return a*b;
}