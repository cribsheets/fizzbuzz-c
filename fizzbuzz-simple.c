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
  for (int idx = 0; idx <= 100; idx++) {

    // we put this condition first, since it's the highest
    // priority. if we'd put the 3 or 5 test first, they
    // would've printed and we'd never get to fizzbuzz
    if ((0 == idx % 5) && (0 == idx % 3)) {
      // don't forget the newline!
      printf("fizzbuzz\n");
      // we continue here to shortcut out of the loop, our
      // task being complete for this number
      continue;
    }

    // because 3 and 5 have the common denominator of 15, we can
    // also write the fizzbuzz more simply as a modulo 15 because math.
    if (0 == idx % 15) {
      printf("fizzbuzz\n");
      continue;
    }

    // the next two tests for 3 and 5 could be in any order, but
    // decreasing makes more sense to me.
    if (0 == idx % 5) {
      printf("buzz\n");
      // done, next continue;
    }

    if (0 == idx % 3) {
      printf("fizz\n");
      continue;
    }

    // if we've reached this point in the code, we know that
    // none of the previous continues have fired and as such
    // the number is not divisible by three or five.
    printf("%i\n", idx);
  }

  // since the main() signature is expecting an integer
  // return value, we return 0 here (indicating success).
  return 0;
}
