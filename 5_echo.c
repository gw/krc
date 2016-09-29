/*
Toy version of the echo program.

p. 115
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
  while (--argc > 0)
    printf(argc > 1 ? "%s " : "%s", *++argv);
  printf("\n");
  return 0;
}