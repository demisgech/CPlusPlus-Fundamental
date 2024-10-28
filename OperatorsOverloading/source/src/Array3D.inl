
#ifndef ARRAY3D__INL__
#define ARRAY3D__INL__

#include <array>
#include <cassert>
#include <cstddef>

#include "Array3D.hpp"

template <typename T, std::size_t Z, std::size_t Y, std::size_t X>
inline constexpr T& Array3D<T, Z, Y, X>::operator()(std::size_t z,
                                                    std::size_t y,
                                                    std::size_t x) {
  assert(z < Z and y < Y and x < X);
  return m[Z * Y * X + y * X + x];
}

template <typename T, std::size_t Z, std::size_t Y, std::size_t X>
constexpr const T& Array3D<T, Z, Y, X>::operator()(std::size_t z, std::size_t y,
                                                   std::size_t x) const {
  assert(z < Z && y < Y && x < X);
  return m[z * Y * X + y * X + x];
}

#endif  // ARRAY3D__INL__