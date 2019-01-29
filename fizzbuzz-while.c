/*
 * we include stdio.h because it has the
 * printf function we want to use to output 
 * to the console.
 */
#include <stdio.h>

/*
 * remember the rules:
 * - if the number is divisible by 3, print fizz
 * - if the number is divisible by 5, print buzz
 * - if the number is divisible by 3 AND 5, print fizzbuzz
 * - otherwise, print the number
 *
 * since the fizzbuzz condition will also satisfy both fizz
 * and buzz, it's useful to think of that as the highest 
 * priority rule, and rewrite as:
 * - if the number is divisible by 3 AND 5, print fizzbuzz
 * - if the number is divisible by 5, print buzz
 * - if the number is divisible by 3, print fizz
 */
int main(void) {

  // first thing, we need to iterate through all of the numbers 0-100
  // let's initialize number to be zero, and use a while instead
  // of a for, just for kicks.
  int number = -1; // why are we using -1 instead of 0? see below.

  while (number < 100) {
    // in the while implementation, we have to increment
    // number ourselves, but the continue statements will
    // shortcut back to the while statement. because of this,
    // we have to increment the number first, or increment
    // the number in each test, which seems like a pain.
    number++;

    // putting this first means we have to start from -1, and
    // we also have a strictly less than 100 test in the
    // while loop. this doesn't feel as clean as the `for`
    // loop to me. but on to the tests:

    // because 3 and 5 have the common denominator of 15, we can
    // write the fizzbuzz test as a modulo 15 because math.
    if (0 == number % 15) {
      printf("fizzbuzz\n");
      continue;
    }

    // the next two tests for 3 and 5 could be in any order, but
    // decreasing makes more sense to me.
    if (0 == number % 5) {
      printf("buzz\n");
      // done, next continue;
      continue;
    }

    if (0 == number % 3) {
      printf("fizz\n");
      continue;
    }

    // if we've reached this point in the code, we know that
    // none of the previous continues have fired and as such
    // the number is not divisible by three or five.
    printf("%i\n", number);

  }

  // since the main() signature is expecting an integer
  // return value, we return 0 here (indicating success).
  return 0;
}
