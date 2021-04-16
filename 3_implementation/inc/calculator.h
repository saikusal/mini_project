
#ifndef __MAIN_H__
#define __MAIN_H__
/*
typedef enum Error
{
    Error_div_by_Zero=-1,
    Negative_number=-1,
    Pass=0,
    Power_Zero=1,
    Factorial_of_Zero_or_One=1,
}error;
*/

/**
 * @brief prototyping of the functions used
 * 
 * @param a  operand1
 * @param b operand2
 * @return int to return the value
 */
int Addition(int a, int b);

int Subtraction(int a, int b);

int Multiplication(int a, int b);

int Division(int a, int b);

int Modulus(int a, int b);

int Power(int a, int b);

int Factorial(int a);

int Square(int a);

#endif
