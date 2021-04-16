#include "unity.h"
#include "unity_internals.h"
#include "calculator.h"


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}
/**
 * @brief testcase for Factorial of numbers
 * 
 */
void test_factorial(void)
{
  TEST_ASSERT_EQUAL(120, Factorial(5));
  TEST_ASSERT_EQUAL(720, Factorial(6));
}
/**
 * @brief testcase for testing Factorial using 0 and 1 
 * 
 */
void test_factorial_zero(void)
{
  TEST_ASSERT_EQUAL(1, Factorial(0));
  TEST_ASSERT_EQUAL(1, Factorial(1));
}
/**
 * @brief testcase for testing Factorial with negative values
 * 
 */
void test_factorial_Negative(void)
{
  TEST_ASSERT_EQUAL(-1, Factorial(-1));
  TEST_ASSERT_EQUAL(-1, Factorial(-10));
}
/**
 * @brief testcase for testing Factorial for o and 1 values
 * 
 */
void test_zero_one(void)
{
  TEST_ASSERT_EQUAL(1, Factorial(0));
  TEST_ASSERT_EQUAL(1, Factorial(1));
}
/**
 * @brief testcase for testing Factorial for negative values
 * 
 */
void test_negative(void)
{
  TEST_ASSERT_EQUAL(-1, Factorial(-5));
  TEST_ASSERT_EQUAL(-1, Factorial(-10));
}
/**
 * @brief testcase for testing Addition function
 * 
 */
void test_Addition(void)
{
  TEST_ASSERT_EQUAL(10, Addition(5,5));
  TEST_ASSERT_EQUAL(300, Addition(100,200));
}
/**
 * @brief testcase for testing Subtraction function
 * 
 */
void test_Subtraction(void)
{
  TEST_ASSERT_EQUAL(0, Subtraction(5,5));
  TEST_ASSERT_EQUAL(100, Subtraction(200,100));
}
/**
 * @brief testcase for testing Multiplication function
 * 
 */
void test_Multiplication(void)
{
  TEST_ASSERT_EQUAL(25, Multiplication(5,5));
  TEST_ASSERT_EQUAL(1000, Multiplication(10,100));
}
/**
 * @brief testcase for testing Multiplication function with 0
 * 
 */
void test_Multiplication_zero(void)
{
  TEST_ASSERT_EQUAL(0, Multiplication(5,0));
  TEST_ASSERT_EQUAL(0, Multiplication(0,100));
}
/**
 * @brief testcase for testing Multiplication function with negative values
 * 
 */
void test_Multiplication_negative(void)
{
  TEST_ASSERT_EQUAL(-1, Multiplication(-5,1));
  TEST_ASSERT_EQUAL(-1, Multiplication(1,-10));
}
/**
 * @brief testcase for testing Division function with divide by zero exception
 * 
 */
void test_Division_zero(void)
{
  TEST_ASSERT_EQUAL(-1, Division(5,0));
  TEST_ASSERT_EQUAL(-1, Division(10,0));
}
/**
 * @brief testcase for testing Division function with negative values
 * 
 */
void test_Division_Negative(void)
{
  TEST_ASSERT_EQUAL(-1, Division(5,-1));
  TEST_ASSERT_EQUAL(-1, Division(100,-1));
}
/**
 * @brief testcase for testing Division function with positive values
 * 
 */
void test_Division(void)
{
  TEST_ASSERT_EQUAL(5, Division(25,5));
  TEST_ASSERT_EQUAL(10, Division(100,10));
}
/**
 * @brief testcase for testing Power function with positive values
 * 
 */
void test_Power(void)
{
  TEST_ASSERT_EQUAL(8, Power(2,3));
  TEST_ASSERT_EQUAL(1000, Power(10,3));
}
/**
 * @brief testcase for testing Power function with 0 values
 * 
 */
void test_power_Zero(void)
{
  TEST_ASSERT_EQUAL(1, Power(2,0));
  TEST_ASSERT_EQUAL(1, Power(10,0));
}
/**
 * @brief testcase for testing Modulus function with 0
 * 
 */
void test_Modulus_Zero(void)
{
  TEST_ASSERT_EQUAL(-1, Modulus(5,0));
  TEST_ASSERT_EQUAL(-1, Modulus(10,0));
}
/**
 * @brief testcase for testing Modulus function with  perfect values
 * 
 */
void test_Modulus(void)
{
  TEST_ASSERT_EQUAL(0, Modulus(4,2));
  TEST_ASSERT_EQUAL(0, Modulus(100,10));
}
/**
 * @brief testcase for testing Square function with 0
 * 
 */
void test_square_zer0(void)
{
  TEST_ASSERT_EQUAL(0, Square(0));
  TEST_ASSERT_EQUAL(0, Square(0));
}
/**
 * @brief testcase for testing Square function with Negative values
 * 
 */
void test_square_negative(void)
{
  TEST_ASSERT_EQUAL(4, Square(-2));
  TEST_ASSERT_EQUAL(16, Square(-4));
}
/**
 * @brief testcase for testing Square function with  perfect values
 * 
 */
void test_square(void)
{
  TEST_ASSERT_EQUAL(25, Square(5));
  TEST_ASSERT_EQUAL(100, Square(10));
}
int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_factorial);
  RUN_TEST(test_factorial_zero);
  RUN_TEST(test_factorial_Negative);
  RUN_TEST(test_zero_one);
  RUN_TEST(test_negative);
  RUN_TEST(test_Addition);
  RUN_TEST(test_Subtraction);
  RUN_TEST(test_Multiplication);
  RUN_TEST(test_Multiplication_zero);
  RUN_TEST(test_Multiplication_negative);
  RUN_TEST(test_Division_zero);
  RUN_TEST(test_Division_Negative);
  RUN_TEST(test_Division);
  RUN_TEST(test_Power);
  RUN_TEST(test_power_Zero);
  RUN_TEST(test_Modulus_Zero);
  RUN_TEST(test_Modulus);
  RUN_TEST(test_square_zer0);
  RUN_TEST(test_square_negative);
  RUN_TEST(test_square);
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}
