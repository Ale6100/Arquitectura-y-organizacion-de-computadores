#include <stdio.h>

int main() {
  signed char sChar = -128;
  unsigned char uChar = 255;
  printf("1°: %d (%lu bytes) \n", sChar, sizeof(sChar));
  printf("2°: %d (%lu bytes) \n", uChar, sizeof(uChar));

  signed short sShort = -32768;
  unsigned short uShort = 65535;
  printf("3°: %d (%lu bytes) \n", sShort, sizeof(sShort));
  printf("4°: %d (%lu bytes) \n", uShort, sizeof(uShort));
  
  signed int sInt = -2147483648;
  unsigned int uInt = 4294967295;
  printf("5°: %d (%lu bytes) \n", sInt, sizeof(sInt));
  printf("6°: %d (%lu bytes) \n", uInt, sizeof(uInt));
  
  signed long int sLong = -9.1e18;
  unsigned long int uLong = 1.84e19;
  printf("7°: %li (%lu bytes) \n", sLong, sizeof(sLong));
  printf("8°: %li (%lu bytes) \n", uLong, sizeof(uLong));

  return 0;
}
