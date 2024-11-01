#include <vector>

namespace leetcode {
typedef std::vector<std::vector<int>> PascalTriangle;

PascalTriangle
generate_pascal_triangle(int rows);

void
print_pascal_triangle(const PascalTriangle& pt);
}
