#include <stdio.h>

typedef struct {
  char* nombre;
  int vida;
  double ataque;
  double defensa;
} mounstruo_t;

int main() {
  mounstruo_t mounstruos[] = {
    {
      "Roberto",
      100,
      150,
      60
    },
    {
      "Pepe",
      80,
      200,
      90
    }
  };

  printf("Mounstruo 1: %s y %i\n", mounstruos[0].nombre, mounstruos[0].vida);
  printf("Mountruo 2: %s y %i\n", mounstruos[1].nombre, mounstruos[1].vida);

  return 0;
}
