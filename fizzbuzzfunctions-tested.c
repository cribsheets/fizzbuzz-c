/*
 * our function prototypes and includes are contained
 * in fizzbuzzfunctions.h
 */
#include "fizzbuzzfunctions.h"

bool is_fizz(int number) {
  return (0 == number % 3);
}

bool is_buzz(int number) {
  return (0 == number % 5);
}

bool is_fizzbuzz(int number) {
  return (0 == number % 15);
}
