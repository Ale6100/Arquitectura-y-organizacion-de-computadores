#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char* nombre;
  int edad;
} persona_t;

void eliminarPersona(persona_t* persona) {
  free(persona->nombre);
  free(persona);
}

int main() {
  char* nombre = "Roberto";
  int edad = 30;

  persona_t* persona = malloc(sizeof(persona_t));

  if (persona == NULL) {
    return 1;
  }

  size_t lenPersona = strlen(nombre) + 1;
  
  persona->nombre = malloc(lenPersona);
  
  if (persona->nombre == NULL) {
    free(persona);
    return 1;
  }

  strcpy(persona->nombre, nombre);
  persona->edad = edad;

  eliminarPersona(persona);

  return 0;
}
