#include "include/Math.h"
#include <iostream>

int main() {
  Vec2D a{0.1F, 0.2F};
  Vec2D b{1.0F, 1.0F};
  Vec2D c = a + b;
  c.Print();
  return 0;
}
