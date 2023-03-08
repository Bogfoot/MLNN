#include "../include/Vec3D.h"

// 3D vector class
Vec3D::Vec3D(double _x_pos, double _y_pos, double _z_pos) {
  x_pos = _x_pos;
  y_pos = _y_pos;
  z_pos = _z_pos;
};

Vec3D &Vec3D::operator+(const Vec3D &rhs) {
  this->x_pos += rhs.x_pos;
  this->y_pos += rhs.y_pos;
  this->z_pos += rhs.z_pos;
  return *this;
}
Vec3D &Vec3D::operator-(const Vec3D &rhs) {
  this->x_pos -= rhs.x_pos;
  this->y_pos -= rhs.y_pos;
  this->z_pos += rhs.z_pos;
  return *this;
}
Vec3D &Vec3D::operator*(const Vec3D &rhs) {
  this->x_pos *= rhs.x_pos;
  this->y_pos *= rhs.y_pos;
  this->z_pos *= rhs.z_pos;
  return *this;
}
Vec3D &Vec3D::operator/(const Vec3D &rhs) {
  this->x_pos /= rhs.x_pos;
  this->y_pos /= rhs.y_pos;
  this->z_pos /= rhs.z_pos;
  return *this;
}
Vec3D &Vec3D::operator+=(const Vec3D &rhs) {
  this->x_pos += rhs.x_pos;
  this->y_pos += rhs.y_pos;
  this->z_pos += rhs.z_pos;
  return *this;
}
Vec3D &Vec3D::operator-=(const Vec3D &rhs) {
  this->x_pos -= rhs.x_pos;
  this->y_pos -= rhs.y_pos;
  this->z_pos -= rhs.z_pos;
  return *this;
}
Vec3D &Vec3D::operator*=(const Vec3D &rhs) {
  this->x_pos *= rhs.x_pos;
  this->y_pos *= rhs.y_pos;
  this->z_pos *= rhs.z_pos;
  return *this;
}
Vec3D &Vec3D::operator/=(const Vec3D &rhs) {
  this->x_pos /= rhs.x_pos;
  this->y_pos /= rhs.y_pos;
  this->z_pos /= rhs.z_pos;
  return *this;
}

void Vec3D::Print() {
  std::cout << "x_pos = " << this->x_pos << ", y_pos = " << this->y_pos
            << ", z_pos = " << this->z_pos << std::endl;
}
