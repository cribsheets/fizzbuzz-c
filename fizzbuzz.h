/*
 * we include stdio.h because it has the
 * printf function we want to use to output
 * to the console.
 */
#include <stdio.h>

/*
 * we're adding stdbool here so that we can
 * use true and false with clarity in our
 * return values for the test functions.
 */
#include <stdbool.h>

// return true if int is a fizz
bool is_fizz(int);
// return true if int is a buzz
bool is_buzz(int);
// return true if int is a fizzbuzz
bool is_fizzbuzz(int);
