#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int valores[] = {0, 0, 0, 0, 0, 0};
  srand(time(NULL));

  for (int i = 1; i <= 60000000; i++) {
    int numero = rand() % 6 + 1;

    valores[numero-1]++;
  }

  printf("%i, %i, %i, %i, %i, %i\n", valores[0], valores[1], valores[2], valores[3], valores[4], valores[5]);
  return 0;
}
