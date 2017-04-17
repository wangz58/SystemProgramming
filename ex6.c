// Copyright [2017] Zhixing Wang
// 1333101
// wangz58@cs.washington.edu
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "usage: ./ex6 filename \n");
    return EXIT_FAILURE;
  }
  FILE *fin = fopen(argv[1], "rb");
  if (fin == NULL) {
    fprintf(stderr, "file: %s not found \n", argv[1]);
    return EXIT_FAILURE;
  }
  if (fseek(fin, 0, SEEK_END) != 0) {
     fprintf(stderr, "can't find the end of file \n");
     return EXIT_FAILURE;
  }
  int size = ftell(fin);
  if (size < 0) {
    fprintf(stderr, "file length negative \n");
    return EXIT_FAILURE;
  }
  for (int i = size - 1; i >= 0; i--) {
    if (fseek(fin, i, SEEK_SET) != 0) {
      fprintf(stderr, "file length negative \n");
      return EXIT_FAILURE;
    }
    char c;
    if (fread(&c, sizeof(c), 1, fin) != 1) {
      fprintf(stderr, "file read wrong at %d bytes from the end \n", i);
      return EXIT_FAILURE;
    }
    printf("%c", c);
  } 
  fclose(fin);
  return EXIT_SUCCESS;
}
