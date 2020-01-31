#include <iostream>

int main() {
  int a, b;
  std::cout "Gib 2 numbers a..b:" << std::endl;
  std::cin >> a >> b;

  for (int i = a; i <= b; i++) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
}
