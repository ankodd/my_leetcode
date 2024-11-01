#include "pascal_triangle.h"

int
main(int argc, char** argv)
{
  auto res = leetcode::generate_pascal_triangle(5);
  leetcode::print_pascal_triangle(res);
}
