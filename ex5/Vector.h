/* Copyright 2017 Zhixing Wang
 * 1333101
 * wangz58@cs.washington.edu
 * 04/10/2017
 */

#ifndef VECTOR_H
#define VECTOR_H

#include <stdbool.h>
#include <stdint.h>

// An element in the vector.
typedef void* element_t;

// A vector containing elements.
typedef struct vector_t {
  size_t length; // size of vector
  element_t *arry; // elements in the vector
} *vector_t;

// On success, return a vector with initial length of n and all elements
// initialized to be NULL
// On failure, returns NULL.  
// Assumes v != NULL.
vector_t VectorCreate(size_t n);

// Frees the memory allocated for the vector_t.
// Assumes v != NULL.
void VectorFree(vector_t v);

// Sets the nth element of v to be e. If index is out of the bounds of this
// vector, expand the vector to be at least (index+1) big with previous 
// values at previously existing indexes and NULL at new indexes Returns 
// the previous nth element_t in prev.
// Freeing e is the responsibility of the user, not the vector_t.
// Returns true iff successful. 
// Assumes v != NULL.
bool VectorSet(vector_t v, uint32_t index, element_t e, element_t *prev);

// Returns the element at the given index within v. 
// Assumes v != NULL and 0 <= index < vector's length
element_t VectorGet(vector_t v, uint32_t index);

// Returns the length of v. 
// Assumes v != NULL.
size_t VectorLength(vector_t v);

#endif