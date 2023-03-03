#include "Vec2D.h"

// 2D vector class
Vec2D::Vec2D(double _x_pos, double _y_pos) {
  x_pos = _x_pos;
  y_pos = _y_pos;
}

// Default constructor
Vec2D::Vec2D() {
  x_pos = 0.0F;
  y_pos = 0.0F;
}

void Vec2D::Print() {
  std::cout << "x_pos = " << this->x_pos << ", y_pos = " << this->y_pos
            << std::endl;
}

Vec2D &Vec2D::operator/=(const Vec2D &rhs) {
  this->x_pos /= rhs.x_pos;
  this->y_pos /= rhs.y_pos;
  return *this;
}

Vec2D &Vec2D::operator+(const Vec2D &rhs) {
  this->x_pos += rhs.x_pos;
  this->y_pos += rhs.y_pos;
  return *this;
}
Vec2D &Vec2D::operator-(const Vec2D &rhs) {
  this->x_pos -= rhs.x_pos;
  this->y_pos -= rhs.y_pos;
  return *this;
}
Vec2D &Vec2D::operator*(const Vec2D &rhs) {
  this->x_pos *= rhs.x_pos;
  this->y_pos *= rhs.y_pos;
  return *this;
}
Vec2D &Vec2D::operator/(const Vec2D &rhs) {
  this->x_pos /= rhs.x_pos;
  this->y_pos /= rhs.y_pos;
  return *this;
}
Vec2D &Vec2D::operator+=(const Vec2D &rhs) {
  this->x_pos += rhs.x_pos;
  this->y_pos += rhs.y_pos;
  return *this;
}
Vec2D &Vec2D::operator-=(const Vec2D &rhs) {
  this->x_pos -= rhs.x_pos;
  this->y_pos -= rhs.y_pos;
  return *this;
}
