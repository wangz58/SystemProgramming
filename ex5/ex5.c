/* Copyright 2017 Zhixing Wang
 * 1333101
 * wangz58@cs.washington.edu
 * 04/10/2017
 */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "Vector.c"

#define N 10 // Test vector length.

// Print the elements in the vector on a line.
// Assumes vector != NULL
static void PrintIntVector(vector_t v);

// 
int main(int argc, char *argv[]) {
  uint32_t i;
  vector_t v = VectorCreate(4);

  if (v == NULL)
    return EXIT_FAILURE;

  for (i = 0; i < N; ++i) { // Place some elements in the vector.
    int *x = (int*)malloc(sizeof(int));
    // if allocation is not successful, exit the program
    if (x == NULL) {
      return EXIT_FAILURE;
    }
    // set the value stored in the current element
    *x = (2*i);
    // set the value stored in vector
    element_t old;
    if (!VectorSet(v, i, x, &old)) {
      return EXIT_FAILURE;
    }
    // free(old);
  }

  PrintIntVector(v);

  return EXIT_SUCCESS;
}

static void PrintIntVector(vector_t v) {
  uint32_t i;
  size_t length;

  assert(v != NULL);

  length = VectorLength(v);

  if (length > 0) {
    printf("[%d", *((int*)VectorGet(v, 0)));
    for (i = 1; i < VectorLength(v); ++i)
      printf(",%d", *((int*)VectorGet(v, i)));
    printf("]\n");
  }
}