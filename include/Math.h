#pragma once
#include <array>
#include <iostream>
#include <vector>

#include "MatrixNxN.h"
#include "Vec2D.h"
#include "Vec3D.h"

namespace Math {
// Grid Path sum
template <typename T> T grid_paths(T n, T m);
// Sum of array
template <typename T, std::size_t SIZE> double sum(std::array<T, SIZE> &n);
// Recursive whole number sum from 0 - n
int wnsum(int n);
// Function for whole number sum from 0 - n
int wnsum_control(int n);
} // namespace Math
