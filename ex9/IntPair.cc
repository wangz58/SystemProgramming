#include <cmath>
#include "IntPair.h"

IntPair::IntPair(const int x, const int y) {
  this->x_ = x;
  this->y_ = y;  // this-> is optional, unless names conflict
}

int IntPair::get(int *const x_out, int *const y_out) const {
  *x_out = this->x_;
  *y_out = this->y_;
}

void IntPair::set(const int x, const int y) {
  this->x_ = x;
  this->y_ = y;
}