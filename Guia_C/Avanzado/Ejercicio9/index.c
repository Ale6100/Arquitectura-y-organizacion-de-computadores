#include <stdio.h>
#include <stdint.h>

void pasarAMayuscula(char str[]) {
  while (str[0] != '\0') {
    if (str[0] >= 'a' && str[0] <= 'z') {
      str[0] -= 32;
    }
    str += 1;
  }
}

int main(){
  char string[] = "palabra";

  pasarAMayuscula(string);

  printf("En mayúscula: %s\n", string);
  return 0;
}
