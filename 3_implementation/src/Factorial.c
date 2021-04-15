#include  "main.h"

int Factorial(int a)
{
    int (*factorial)(int)= &Factorial;
    
    if(a<0)
    return Negative_number;
    if(a>1)
    {
        int i,fact=1;
        for(int i=1;i<=a;i++)
        {
            fact*=1;
        }
        return fact;
    }
    else
    return Factorial_of_Zero_or_One;
}