#include <stdio.h>
#define FELIZ 0
#define TRISTE 1

int estado = TRISTE;

void ser_feliz();
void print_estado();

int main() {
  print_estado(); // Imprime "Estoy triste"
  ser_feliz();
  print_estado(); // Imprime "Estoy feliz"
}

void ser_feliz() {
  estado = FELIZ;
}

void print_estado() {
  printf("Estoy %s\n", estado == FELIZ ? "feliz" : "triste");
}
