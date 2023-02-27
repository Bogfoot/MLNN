#include "include/Math.h"
#include <iostream>

int main() {
  Vec2D a{0.1F, 0.2F};
  a.Print();
  Vec2D b{1.0F, 1.0F};
  b.Print();
  Vec2D c = a + b;
  c.Print();

  Vec3D a_3{0.1F, 0.2F, 0.3F};
  a_3.Print();
  Vec3D b_3{1.0F, 1.0F, 1.0F};
  b_3.Print();
  Vec3D c_3 = a_3 + b_3;
  c_3.Print();
  return 0;
}
