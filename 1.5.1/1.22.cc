#include <iostream>

#include "../book_files/1/Sales_item.h"

int main() {
  Sales_item item, sum;
  if (std::cin >> sum) {
    while (std::cin >> item) {
      sum += item;
    }
    std::cout << sum << std::endl;
    return 0;
  } else
    return -1;
}
