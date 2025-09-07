#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char* nombre;
  int edad;
} persona_t;

persona_t* crearPersona(char* nombre, int edad) {
  persona_t* persona = malloc(sizeof(persona_t));
  if (persona == NULL) return NULL;

  size_t len_nombre = strlen(nombre) + 1;

  persona->nombre = malloc(len_nombre);

  if (persona->nombre == NULL) {
    free(persona);
    return NULL;
  }

  strcpy(persona->nombre, nombre);
  persona->edad = edad;

  return persona;
}

int main() {
  char* nombre = "Roberto";
  int edad = 30;

  persona_t* persona = crearPersona(nombre, edad);

  if (persona == NULL) {
    printf("No se pudo construir");
    return 1;
  }

  printf("Nombre: %s, Edad: %i\n", persona->nombre, persona->edad);

  free(persona->nombre);
  free(persona);
  return 0;
}
