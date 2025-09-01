#include <stdio.h>

void funcion() {
  int numero = 2;
  printf("numero en funcion: %i\n", numero);
}

int main() {
  int numero = 1;

  funcion();

  printf("numero en main: %i\n", numero);
  return 0;
}
