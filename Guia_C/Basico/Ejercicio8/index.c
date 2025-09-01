#include <stdio.h>

int main() {
  int i = 10;

  printf("i original: %i\n", i++);
  printf("i con 1 extra: %i\n", i);

  int j = 10;

  printf("j original: %i\n", j);
  printf("i con 1 extra: %i\n", ++j);

  return 0;
}
