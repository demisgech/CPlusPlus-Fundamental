#ifndef ARRAY3D__HPP__
#define ARRAY3D__HPP__

#include <array>
#include <cassert>
#include <cstddef>

template <typename T, std::size_t Z, std::size_t Y, std::size_t X>
class Array3D {
 private:
  std::array<T, Z * Y * X> m{};

 public:
  constexpr T& operator()(std::size_t z, std::size_t y, std::size_t x);
  constexpr const T& operator()(std::size_t z, std::size_t y,
                                std::size_t x) const;
};

#include "../src/Array3D.inl"
#endif  // ARRAY3D__HPP__
