#include <stdio.h>
#include <stdint.h>

int main() {
  int8_t sInt8Max = INT8_MAX;
  uint8_t uInt8Max = UINT8_MAX;
  printf("1°: %i (%lu bytes) \n", sInt8Max, sizeof(sInt8Max));
  printf("2°: %i (%lu bytes) \n", uInt8Max, sizeof(uInt8Max));
  
  int16_t sInt16Max = INT16_MAX;
  uint16_t uInt16Max = UINT16_MAX;
  printf("3°: %i (%lu bytes) \n", sInt16Max, sizeof(sInt16Max));
  printf("4°: %i (%lu bytes) \n", uInt16Max, sizeof(uInt16Max));
  
  int32_t sInt32Max = INT32_MAX;
  uint32_t uInt32Max = UINT32_MAX;
  printf("5°: %i (%lu bytes) \n", sInt32Max, sizeof(sInt32Max));
  printf("6°: %u (%lu bytes) \n", uInt32Max, sizeof(uInt32Max));
  
  int64_t sInt64Max = INT64_MAX;
  uint64_t uInt64Max = UINT64_MAX;
  printf("7°: %li (%lu bytes) \n", sInt64Max, sizeof(sInt64Max));
  printf("8°: %lu (%lu bytes) \n", uInt64Max, sizeof(uInt64Max));

  return 0;
}
