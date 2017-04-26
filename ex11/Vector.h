// Copyright [2017] wangz58
// Zhixing Wang
// 1333101
// wangz58@uw.edu
#ifndef _VECTOR_H_
#define _VECTOR_H_

#include <iostream>

namespace vector333 {
// A Vector represents a vector in 3-space.
class Vector {
 public:
  // constructors:

  // Default: construct the vector (0,0,0)
  Vector();

  // Construct the vector (x,y,z)
  Vector(const double x, const double y, const double z);

  // Copy constructor
  Vector(const Vector &v);

  // Destructor - nothing to do
  ~Vector();

  // Assignment for Vectors
  Vector &operator=(const Vector &rhs);

  // addition and subtraction: produce a new Vector that results from
  // element-wise addition or subtraction of this with other
  Vector operator+(const Vector &other) const;
  Vector operator-(const Vector &other) const;

  // dot-product: if this is (a,b,c) and other is (x,y,z),
  // return ax+by+cz
  double operator*(const Vector &other) const;

  // scalar multiplication: if this is (a,b,c), return (ak,bk,ck)
  Vector operator*(const double k) const;

  // Stream output: define << for Vectors
  friend std::ostream & operator<<(std::ostream &out, const Vector &v);

 private:
  // The representation of a Vector is three doubles giving
  // the x, y, and z magnitudes.
  double *values_;
};
}
#endif  //  _VECTOR_H_