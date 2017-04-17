/* Copyright 2017 Zhixing Wang
 * 1333101
 * wangz58@cs.washington.edu
 * 04/10/2017
 */

#include <assert.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

#include "Vector.h"

//// Helper functions (assume not buggy)
// Returns a copy of arry with new length newLen.  If newLen < oldLen
// then the returned array is clipped.  If newLen > oldLen, then the
// resulting array will be padded with NULL elements.
static element_t *ResizeArray(element_t *arry, size_t oldLen, size_t newLen);

vector_t VectorCreate(size_t n) {
  // allocate memory for both the vector and the array
  vector_t v = (vector_t)malloc(sizeof(struct vector_t));
  v->arry = (element_t*)malloc(n*sizeof(element_t));
  // check whether allocation is successful
  if (v == NULL || v->arry == NULL)
    return NULL;
  // set the length and values of array in vector
  v->length = n;
  for (int i = 0; i < n; i++) {
    v->arry[i] = NULL;
  }
  return v;
}

void VectorFree(vector_t v) {
  assert(v != NULL);
  free(v->arry);
  free(v);
}

bool VectorSet(vector_t v, uint32_t index, element_t e, element_t *prev) {
  assert(v != NULL);

  if (index >= v->length) {
    // update the length
    size_t newLength = index+1;
    v->length = newLength;
    // resize the array
    element_t * newArry = ResizeArray(v->arry, v->length, newLength);
    // if the newly resized array is not allocated properly, return false
    if (newArry == NULL) {
      return false;
    }
    // free the original array and update v's array to the new one
    free(v->arry);
    v->arry = newArry;
  }
  // update the return parameter to be the original value in the array
  *prev = v->arry[index];
  // set the value at this index 
  v->arry[index] = e;

  return true;
}

element_t VectorGet(vector_t v, uint32_t index) {
  assert(v != NULL);
  assert(index >= 0);
  assert(index < v->length);
  return v->arry[index];
}

size_t VectorLength(vector_t v) {
  assert(v != NULL);
  return v->length;
}

static element_t *ResizeArray(element_t *arry, size_t oldLen, size_t newLen) {
  // check whether input is valid
  assert(newLen > 0);
  assert(oldLen > 0);
  assert(arry != NULL);

  uint32_t i;
  size_t copyLen = oldLen > newLen ? newLen : oldLen;
  element_t *newArry;

  newArry = (element_t*)malloc(newLen*sizeof(element_t));

  if (newArry == NULL)
    return NULL; // malloc error!!!

  // Copy elements to new array
  for (i = 0; i < copyLen; ++i)
    newArry[i] = arry[i];  

  // Null initialize rest of new array.
  for (i = copyLen; i < newLen; ++i)
    newArry[i] = NULL;

  return newArry;
}