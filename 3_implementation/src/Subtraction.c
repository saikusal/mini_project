#include  "main.h"

int Subtraction(int a, int b)
{
    int (*sub)(int , int)= &Subtraction;

    return a-b;
}