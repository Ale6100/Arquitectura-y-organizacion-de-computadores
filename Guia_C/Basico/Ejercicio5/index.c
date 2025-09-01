#include <stdio.h>

int main() {
  float nFloat = 0.1;
  double nDouble = 0.1;

  printf("nFloat: %f\n", nFloat);
  printf("nDouble: %f\n", nDouble);

  int nFloatToInt = (int)nFloat;
  int nDoubleToInt = (int)nDouble;

  printf("nFloatToInt: %i\n", nFloatToInt);
  printf("nDoubleToInt: %i\n", nDoubleToInt);

  return 0;
}
