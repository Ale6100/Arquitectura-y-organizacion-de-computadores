#include <stdio.h>

int main(){
  int arreglo[] = {1, 2, 3, 4};
  int largo = 4;
  int rotacion = 2;

  int primerosElementos[rotacion];

  for (int j = 0; j < rotacion; j++) {
    primerosElementos[j] = arreglo[j];
  }

  int contador = 0;

  for (int i = 0; i < largo; i++) {
    if (i >= largo-rotacion) {
      arreglo[i] = primerosElementos[contador];
      contador++;
    } else {
      arreglo[i] = arreglo[i+rotacion];
    }
  }
  
  printf("%i, %i, %i, %i\n", arreglo[0], arreglo[1], arreglo[2], arreglo[3]);
  return 0;
}