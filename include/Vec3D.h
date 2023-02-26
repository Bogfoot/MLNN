#include <iostream>

// 3D vector class
class Vec3D {
private:
  double x_pos, y_pos, z_pos;

public:
  Vec3D();
  Vec3D(double _x_pos, double _y_pos, double _z_pos);
  Vec3D &operator+(const Vec3D &rhs);
  Vec3D &operator-(const Vec3D &rhs);
  Vec3D &operator*(const Vec3D &rhs);
  Vec3D &operator/(const Vec3D &rhs);
  Vec3D &operator+=(const Vec3D &rhs);
  Vec3D &operator-=(const Vec3D &rhs);
  Vec3D &operator*=(const Vec3D &rhs);
  Vec3D &operator/=(const Vec3D &rhs);
  void Print();
};
