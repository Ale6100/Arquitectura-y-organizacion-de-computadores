#include <stdio.h>

int factorial(int n) {
  int acumulador = 1;
  
  for (int i = n; i != 1; i--) {
    acumulador *= i;
  }

  return acumulador;
}

int main() {
  int numero = 2;

  int factorialDeNumero = factorial(numero);

  printf("Factorial de %i: %i\n", numero, factorialDeNumero);
  return 0;
}
