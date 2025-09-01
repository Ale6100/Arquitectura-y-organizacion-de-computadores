#include <stdio.h>

int main(){
  int arreglo[] = {1, 2, 3, 4};
  int largo = 4;

  int primerElemento = arreglo[0];

  for (int i = 0; i < largo; i++) {
    if (i == largo-1) {
      arreglo[i] = primerElemento;
    } else {
      arreglo[i] = arreglo[i+1];
    }
  }
  
  printf("%i, %i, %i, %i\n", arreglo[0], arreglo[1], arreglo[2], arreglo[3]);
  return 0;
}