#include <iostream>
#include <tuple>

int main() {
  auto a = std::tuple(3.14, "^__^");
  auto[f, b] = a;
  std::cout << f << " " << b << std::endl;
  return 0;
}
