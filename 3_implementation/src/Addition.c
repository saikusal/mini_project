#include  "main.h"

int Addition(int a, int b)
{
    int (*add)(int , int)= &Addition;
    
    return a+b;
}
