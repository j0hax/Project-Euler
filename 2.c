#include <stdio.h>

/*
 * Problem 2 -- Even Fibonacci numbers
 * By considering the terms in the Fibonacci sequence whose values do
 * not exceed four million, find the sum of the even-valued terms.
*/

int main(int argc, char const *argv[]) {
  unsigned int previous = 0;
  unsigned int current = 1;
  unsigned int next = 2;
  unsigned int sum = 0;

  while (current <= 4000000){
    if (current % 2 == 0) {
      sum += current;
    }
    next = previous + current;
    previous = current;
    current = next;
  }
  printf("Sum: %i\n", sum);
  return 0;
}
