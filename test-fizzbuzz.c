#include "unity/src/unity.h"
#include "fizzbuzzfunctions.h"

/*
 * we define tests using unity's constructs to verify
 * that our fizzy tests do what we expect.
 *
 * these tests aren't very sophisticated, but they will
 * work for our purposes.
 */

void test_iz_fizz(void) {
  for (int number = 0; number <= 1000; number++) {
    if (0 == number % 3) {
      TEST_ASSERT_TRUE(is_fizz(number));
    }
  }
}

void test_iz_not_fizz(void) {
  for (int number = 0; number <= 1000; number++) {
    if (0 != number % 3) {
      TEST_ASSERT_FALSE(is_fizz(number));
    }
  }
}

void test_iz_buzz(void) {
  for (int number = 0; number <= 1000; number++) {
    if (0 == number % 5) {
      TEST_ASSERT_TRUE(is_buzz(number));
    }
  }
}

void test_iz_not_buzz(void) {
  for (int number = 0; number <= 1000; number++) {
    if (0 != number % 5) {
      TEST_ASSERT_FALSE(is_buzz(number));
    }
  }
}

void test_iz_fizzbuzz(void) {
  for (int number = 0; number <= 1000; number++) {
    if (0 == number % 15) {
      TEST_ASSERT_TRUE(is_fizzbuzz(number));
    }
  }
}

void test_iz_not_fizzbuzz(void) {
  for (int number = 0; number <= 1000; number++) {
    if (0 != number % 15) {
      TEST_ASSERT_FALSE(is_fizzbuzz(number));
    }
  }
}

/*
 * our test program has a main() routine, like any other
 * c program
 */
int main(void) {
  UNITY_BEGIN();

  RUN_TEST(test_iz_fizz);
  RUN_TEST(test_iz_buzz);
  RUN_TEST(test_iz_fizzbuzz);
  RUN_TEST(test_iz_not_fizz);
  RUN_TEST(test_iz_not_buzz);
  RUN_TEST(test_iz_not_fizzbuzz);

  return UNITY_END();
}


