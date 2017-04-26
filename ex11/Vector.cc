// Copyright [2017] wangz58
// Zhixing Wang
// 1333101
// wangz58@uw.edu
#include "Vector.h"
#include <iostream>
#include <cstdlib>
#include "./Vector.h"

namespace vector333 {
Vector::Vector() : Vector(0.0, 0.0, 0.0) {
}

Vector::Vector(const double x, const double y, const double z) {
  values_ = new double[3];
  values_[0] = x;
  values_[1] = y;
  values_[2] = z;
}

Vector::Vector(const Vector &v) : Vector(v.values_[0],
                                         v.values_[1],
                                         v.values_[2]) {
}

Vector::~Vector() {
  delete[] values_;
}

// addition: return element-wise sum of this + other
Vector Vector::operator+(const Vector &other) const {
  return Vector(values_[0] + other.values_[0],
                values_[1] + other.values_[1],
                values_[2] + other.values_[2]);
}

// subtraction: return element-wise difference of this - other
Vector Vector::operator-(const Vector &other) const {
  return Vector(values_[0] - other.values_[0],
                values_[1] - other.values_[1],
                values_[2] - other.values_[2]);
}

// dot-product: if this is (a,b,c) and other is (x,y,z),
// return ax+by+cz
double Vector::operator*(const Vector &other) const {
  return values_[0]*other.values_[0] +
         values_[1]*other.values_[1] +
         values_[2]*other.values_[2];
}

// scalar multiplication: if this is (a,b,c), return (ak,bk,ck)
Vector Vector::operator*(const double k) const {
  return Vector(values_[0] * k,
         values_[1] * k,
         values_[2] * k);
}

// Vector assignment
Vector &Vector::operator=(const Vector &rhs) {
  // replace state of this with values from rhs; do nothing if
  // self-asignment. (Even though in this particular case there would
  // be no harm, it's always best to check for self-assignment and do
  // nothing if detected.)
  if (this != &rhs) {
    values_[0] = rhs.values_[0];
    values_[1] = rhs.values_[1];
    values_[2] = rhs.values_[2];
  }
  // return reference to lhs of assignment
  return *this;
}


// Stream output: << for Vectors
std::ostream & operator<<(std::ostream &out, const Vector &v) {
  out << "(" << v.values_[0]
      << "," << v.values_[1]
      << "," << v.values_[2] << ")";
  return out;
}
}
