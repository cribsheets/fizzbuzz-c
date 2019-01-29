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
  // let's initialize number to be zero, and use a `while` instead
  // of a for, just for kicks.
  int number = 0;

  while (number <= 100) {

    // because 3 and 5 have the common denominator of 15, we can
    // write the fizzbuzz test as a modulo 15 because math.
    if (0 == number % 15) {
      printf("fizzbuzz\n");
      // here we jump to the increment at the end of
      // the while loop with `goto`.
      goto increment;
    }

    // the next two tests for 3 and 5 could be in any order, but
    // decreasing makes more sense to me.
    if (0 == number % 5) {
      printf("buzz\n");
      goto increment;
    }

    if (0 == number % 3) {
      printf("fizz\n");
      goto increment;
    }

    // if we've reached this point in the code, we know that
    // none of the previous tests have fired and as such
    // the number is not divisible by three or five.
    printf("%i\n", number);

    increment:
    // in the `while` implementation, we have to increment
    // number ourselves. including a label here we can jump to
    // allows us to increment `number` at the end of the while
    // loop, bypassing things we don't want.
    //
    // using a `goto`, you'll definitely catch some side-eye
    // from other programmers, but there are cases where
    // its the best way to solve a problem.
    number++;
  }

  // since the main() signature is expecting an integer
  // return value, we return 0 here (indicating success).
  return 0;
}
