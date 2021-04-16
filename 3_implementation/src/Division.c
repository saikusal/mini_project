#include "calculator.h"

int Division(int a ,int b)
{
     int (*div)(int,int)=&Division;
     if(b==0)
    {
        return -1;
    }
    else if(b<0)
    {
        return -1;
    }
    else
    return a/b;
}