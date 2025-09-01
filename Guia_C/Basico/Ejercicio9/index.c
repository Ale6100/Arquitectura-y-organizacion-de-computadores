#include <stdio.h>

int main() {
  // Pienso un caso ideal
  // unsigned int a = 0xa0000000;
  // unsigned int b = 0x00000005;

  // a = a >> 29;

  // printf("a == b ? %i\n", a == b);

  // Ahora uso un caso más general
  unsigned int a = 0xa296b2cf;
  unsigned int b = 0x1bcf3ab5;

  b = b << 29; // Limpio b para que sea como el caso ideal
  b = b >> 29;

  a = a >> 29; // a se limpia "sólo", ya en el caso ideal sucedía

  printf("a == b ? %i\n", a == b);  

  return 0;
}
