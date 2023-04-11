#include "include/Math.h"
#include <iostream>

int main() {
  int size = 5;
  MatrixNxN nxn{size};
  for (int i{0}; i < size; i++) {
    for (int j{0}; j < size; j++) {
      nxn[i][j] = j  - i + 1;
    }
  }
  nxn.Print();
  return 0;
}
