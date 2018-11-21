/*
 * Problem 1 - Multiples of 3 and 5
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {
  unsigned int total;
  for (size_t i = 0; i < 1000; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      total += i;
    }
  }
  printf("Total: %i\n", total);
  return 0;
}
