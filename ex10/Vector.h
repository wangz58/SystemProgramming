// Copyright [2017] wangz58
// Zhixing Wang
// 1333101
// wangz58@uw.edu
#ifndef _VECTOR_H_
#define _VECTOR_H_

#include <iostream>

class Vector {
 public:
  Vector(const float x, const float y, const float z);
  Vector();
  Vector(const Vector &other);
  ~Vector();

  Vector & operator=(const Vector &other);

  Vector operator+(const Vector &other) const;
  Vector operator-(const Vector &other) const;

  float operator*(const Vector &other) const;
  Vector operator*(const float &num) const;

  friend std::ostream &operator<<(std::ostream &out, const Vector &v);
 private:
  float x_;
  float y_;
  float z_;
};

#endif
