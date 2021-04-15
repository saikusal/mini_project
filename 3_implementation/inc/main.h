
#include<stdio.h>
#include<math.h>
#ifndef __MAIN_H__
#define __MAIN_H__

typedef enum error
{
    Error_div_by_Zero=-1,
    Negative_number=-1,
    Pass=0,
    Power_Zero=1,
    Factorial_of_Zero_or_One=1,
}error;

int Addition(int a, int b);

int Subtraction(int a, int b);

int Multiplication(int a, int b);

int Division(int a, int b);

int Modulus(int a, int b);

int Power(int a, int b);

int Factorial(int a);
#endif