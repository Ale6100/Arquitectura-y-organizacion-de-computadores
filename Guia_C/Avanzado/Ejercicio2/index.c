#include <stdio.h>

typedef struct {
  char* nombre;
  int vida;
  double ataque;
  double defensa;
} mounstruo_t;

mounstruo_t evolution(mounstruo_t m) {
  mounstruo_t mNuevo = {
    m.nombre,
    m.vida,
    m.ataque + 10,
    m.defensa + 10
  };
  
  return mNuevo;
}

int main() {

  mounstruo_t mounstruo = {
    "Roberto",
    100,
    150,
    60
  };

  printf("Mounstruo antes: %s, %i, %f, %f\n", mounstruo.nombre, mounstruo.vida, mounstruo.ataque, mounstruo.defensa);
  
  mounstruo = evolution(mounstruo);
  printf("Mounstruo ahora: %s, %i, %f, %f\n", mounstruo.nombre, mounstruo.vida, mounstruo.ataque, mounstruo.defensa);

  return 0;
}