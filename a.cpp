#include <iostream>
#include <optional>
#include <tuple>

int main() {
  auto a = std::tuple(3.14, "^__^");
  auto[f, b] = a;
  std::cout << f << " " << b << std::endl;

  auto o = std::optional("happy happy joy joy");
  std::cout << *o << std::endl;

  return 0;
}
