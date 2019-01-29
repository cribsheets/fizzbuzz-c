/*
 * we'll collect all of our includes and declarations
 * into the fizzbuzz.h file. you should read that file
 * before writing the solution, since it contains function
 * prototypes that will help.
 */
#include "fizzbuzzfunctions.h"

/*
 * this function is executed when running the program
 * from the console.
 */
int main(void) {

  for (int number = 0; number <= 100; number++) {
    if (is_fizzbuzz(number)) {
      printf("fizzbuzz\n");
      continue;
    }

    if (is_buzz(number)) {
      printf("buzz\n");
      continue;
    }

    if (is_fizz(number)) {
      printf("fizz\n");
      continue;
    }

    printf("%i\n", number);
  }
}
