#include "calculator.h"

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