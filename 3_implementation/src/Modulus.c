#include  "main.h"

int Modulus(int a, int b)
{
    int (*modulo)(int , int)= &Modulus;
    
    if(b<0)
    return Error_div_by_Zero;
    else
    return a%b;
}