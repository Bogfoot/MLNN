#include "Math.h"

template <typename T, std::size_t SIZE>
double Math::sum(std::array<T, SIZE> &n) {
  T sum = 0;
  for (auto &summand : n) {
    sum += summand;
  }
  return sum;
}

int Math::wnsum_control(int n) { return (int)(n * (n + 1) / 2); }

// Recursive whole number sum from 0 - n
int Math::wnsum(int n) {
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }
  return n + wnsum(n - 1);
}

template <typename T> T Math::grid_paths(T n, T m) {
  if ((m == 1) || (n == 1)) {
    return 1;
  }
  return grid_paths(n, m - 1) + grid_paths(n - 1, m);
}
