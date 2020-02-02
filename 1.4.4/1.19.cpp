#include <iostream>

/*
 * Exercise 1.19: Revise the program you wrote for the exercises in § 1.4.1
 * (p.  13) that printed a range of numbers so that it handles input in which
 * the first number is smaller than the second.
 */

int main() {
  std::cout << "Gib 2 ints:" << std::endl;

  int a, b;

  std::cin >> a >> b;

  int direction = 0;

  if (a > b) {
    direction = -1;
  } else {
    direction = 1;
  }

  while (a != b) {
    std::cout << a << " ";
    a += direction;
  }

  std::cout << b << std::endl;

  return 0;
}
