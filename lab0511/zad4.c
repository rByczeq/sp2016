/* 4. Napisać program obliczający silnię z podanej, niezbyt dużej, liczby naturalnej.

silnia(0) = 1  -- z definicji
silnia(1) = 1
silnia(2) = 1 * 2 = 2
silnia(3) = 1 * 2 * 3 = 6
silnia(4) = 1 * 2 * 3 * 4 = 24

*/
#include "stdio.h"

int silnia(int k) {
  int s = 1;
  for (int n = 1; n <= k; n++) {
    s = s * n;
  }
  return s;
}

int main(int argc, char const *argv[]) {
  printf("silnia(4) = %d\n", silnia(4));
  printf("silnia(0) = %d\n", silnia(0));
  printf("silnia(1) = %d\n", silnia(1));
  printf("silnia(-4) = %d\n", silnia(-4));
  printf("silnia(2.5) = %d\n", silnia(2.5));
  return 0;
}
