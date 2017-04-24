#include "Vector.h"
#include <iostream>
#include <cstdlib>

Vector::Vector(const float x, const float y, const float z) {
  x_ = x;
  y_ = y;
  z_ = z;
}
Vector::Vector() : Vector(0.0, 0.0, 0.0) {  
}
Vector::Vector(const Vector &other) {
  Vector();
  x_ = other.x_;
  y_ = other.y_;
  z_ = other.z_;
}
Vector::~Vector() {}
Vector & Vector::operator=(const Vector &other) {
  if(this != &other) {
    x_ = other.x_;
    y_ = other.y_;
    z_ = other.z_;
  }
  return *this;
}
Vector Vector::operator+(const Vector &other) const {
  return Vector(x_ + other.x_, y_ + other.y_, z_ + other.z_);
}
Vector Vector::operator-(const Vector &other) const {
  return Vector(x_ - other.x_, y_ - other.y_, z_ - other.z_);
}
float Vector::operator*(const Vector &other) const {
  return (x_ * other.x_ + y_ * other.y_ + z_ * other.z_);
}
Vector Vector::operator*(const float &num) const {
  return Vector(x_ * num, y_ * num, z_ * num);
}
std::ostream &operator<<(std::ostream &out, const Vector &v) {
  out << "(" << v.x_ << "," << v.y_ << "," << v.z_ << ")";
  return out;
}
