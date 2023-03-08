#include "../include/MatrixNxN.h"

// The MatrixNxN class declaration
std::vector<double> &MatrixNxN::operator[](int i) { return data[i]; }
const std::vector<double> &MatrixNxN::operator[](int i) const {
  return data[i];
}

double &MatrixNxN::operator()(int i, int j) { return data[i][j]; }

const double &MatrixNxN::operator()(int i, int j) const { return data[i][j]; }

int MatrixNxN::size() { return Size; }

void MatrixNxN::PrintNxN() {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      std::cout << data[i][j] << "\t ";
    }
    std::cout << std::endl;
  }
}

void MatrixNxN::Print() {
  for (auto array : data) {
    for (auto elem : array) {
      std::cout << elem << "\t ";
    }
    std::cout << std::endl;
  }
}
