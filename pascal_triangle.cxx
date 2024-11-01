#include "pascal_triangle.h"
#include <iostream>
#include <vector>

namespace leetcode {

PascalTriangle
generate_pascal_triangle(int rows)
{
  // Constraints: 1 <= numRows <= 30
  std::vector<std::vector<int>> res;
  res.push_back({ 1 });

  if (rows == 1) {
    return res;
  }

  res.push_back({ 1, 1 });

  for (std::size_t i = 2; i <= rows; ++i) {
    std::vector<int> sub_vec;
    sub_vec.push_back(1);

    for (std::size_t j = 1; j < i; j++) {
      int subtotal = res[i - 1][j - 1] + res[i - 1][j];
      sub_vec.push_back(subtotal);
    }
    sub_vec.push_back(1);
    res.push_back(sub_vec);
  }

  return res;
}

void
print_pascal_triangle(const PascalTriangle& pt)
{
  std::cout << "[ ";
  for (const auto& row : pt) {
    std::cout << '[';
    for (const auto& item : row) {
      std::cout << ' ' << item << ' ';
    }
    std::cout << ']';
  }

  std::cout << " ]\n";
}
}
