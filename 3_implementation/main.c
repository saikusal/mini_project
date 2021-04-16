#include "calculator.h"
/**
 * @brief  function returns sum of the numbers
 * 
 * @param a  operand1
 * @param b operand2
 * @return int to return the value
 */
int Addition(int a ,int b)
{
    int (*add)(int,int)=&Addition;
    return a+b;
}

 /**
 * @brief  function returns subtraction of the numbers
 * 
 * @param a  operand1
 * @param b operand2
 * @return int to return the value
 */
 int Subtraction(int a ,int b)
{
    int (*minus)(int,int)=&Subtraction;
    return a-b;
}

/**
 * @brief  function returns multiplication of the numbers
 * 
 * @param a  operand1
 * @param b operand2
 * @return int to return the value
 */
int Multiplication(int a ,int b)
{
     int (*multiply)(int,int)=&Multiplication;
     if(a==0||b==0)
    {
        return 0;
    }
    else if(a<0||b<0)
    {
        return -1;
    }
    else
    return a*b;
}

/**
 * @brief  function returns quotient of the divided numbers
 * 
 * @param a  operand1
 * @param b operand2
 * @return int to return the value
 */
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

/**
 * @brief  function returns remiander of the  divided numbers
 * 
 * @param a  operand1
 * @param b operand2
 * @return int to return the value
 */
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

/**
 * @brief  function returns value of the power of numbers
 * 
 * @param a  operand1
 * @param b operand2
 * @return int to return the value
 */
int Power(int a ,int b)
{
    int (*power)(int,int)=&Power;
    if(b==0)
    {
        return 1;
    }
    else
    {
        int i,pow=1;
        for(i=pow;i<=b;i++)
        {
            pow*=a;
        }
        return pow;
    }
}

/**
 * @brief  function returns factorial value of the numbers
 * 
 * @param a  operand1
 * @return int to return the value
 */
int Factorial(int a)
{
     int (*factorial)(int)=&Factorial;
     if(a==0||a==1)
    {
        return 1;
    }
    else if(a<0)
    {
        return -1;
    }
    else
    {
        int i,fact=1;
        for(i=1;i<=a;i++)
        {
            fact=fact*i;
        }
        return fact;
    }
}

/**
 * @brief  function returns square of the numbers
 * 
 * @param a  operand1
 * @return int to return the value
 */
int Square(int a)
{
    int (*square)(int)=&Square;
    if(a==0)
    return 0;
    else if(a<0)
    return a*a;
    else
    return a*a;
}