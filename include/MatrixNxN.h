#include <iostream>
#include <vector>

// The MatrixNxN class declaration
class MatrixNxN {
private:
  int N;
  int Size = N * N;
  std::vector<std::vector<double>> data;

public:
  // Constructor that takes an integer argument `n`, the size of the matrix.
  // Initializes the member variable `N` with `n` and the `data` member variable
  // with a `std::vector` of `std::vector`s of doubles, each with `n` elements.
  MatrixNxN(int n) : N(n), data(n, std::vector<double>(n)) {}

  std::vector<double> &operator[](int i);             // check
  const std::vector<double> &operator[](int i) const; // check
  double &operator()(int i, int j);                   // check
  const double &operator()(int i, int j) const;       // check

  class iterator {
  private:
    MatrixNxN &mat;
    int i, j;

  public:
    iterator(MatrixNxN &m, int row, int col) : mat(m), i(row), j(col) {}
    double &operator*() { return mat(i, j); }
    iterator &operator++() {
      ++j;
      if (j == mat.N) {
        j = 0;
        ++i;
      }
      return *this;
    }
    bool operator!=(const iterator &other) const {
      return i != other.i || j != other.j;
    }
  };

  iterator begin() { return iterator(*this, 0, 0); }
  iterator end() { return iterator(*this, N, 0); }
  int size();
  void PrintNxN();
};
