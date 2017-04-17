#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>

/*
Prints size number of bytes in hex starting from any_ptr;
*/
void DumpHex(void * any_ptr, int size);

/*
Initialize different data structures with dummy values;
*/
int main(int argc, char **argv) {
  char     charVal = '0';
  int32_t  intVal = 1;
  float    floatVal = 1.0;
  double   doubleVal  = 1.0;

  typedef struct { 
    char     charVal;
    int32_t  intVal;
    float    floatVal;
    double   doubleVal;
  } Ex2Struct;
  Ex2Struct structVal = { '0', 1, 1.0, 1.0 };

  DumpHex(&charVal, sizeof(char));
  DumpHex(&intVal, sizeof(int32_t));
  DumpHex(&floatVal, sizeof(float));
  DumpHex(&doubleVal, sizeof(double));
  DumpHex(&structVal, sizeof(structVal));
  // return 1;
  return EXIT_SUCCESS;
}

void DumpHex(void * any_ptr, int size) {

  printf("The %d bytes starting at %p are:", size, any_ptr);
  char * byte_ptr = (char *)any_ptr;
  for (int i = 0; i < size; i++) {
    printf(" %02" PRIx8 "", *byte_ptr);
    byte_ptr += 1;
  }
  printf("\n");

}
