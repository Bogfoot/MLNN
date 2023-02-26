#include <iostream>

// 2D vector class
class Vec2D {
private:
  double x_pos, y_pos;

public:
  Vec2D();
  Vec2D(double _x_pos, double _y_pos);
  Vec2D &operator+(const Vec2D &rhs);
  Vec2D &operator-(const Vec2D &rhs);
  Vec2D &operator*(const Vec2D &rhs);
  Vec2D &operator/(const Vec2D &rhs);
  Vec2D &operator+=(const Vec2D &rhs);
  Vec2D &operator-=(const Vec2D &rhs);
  Vec2D &operator*=(const Vec2D &rhs);
  Vec2D &operator/=(const Vec2D &rhs);
  void Print();
};
