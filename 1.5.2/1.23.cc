#include <iostream>

#include "../book_files/1/Sales_item.h"

int main() {
  Sales_item item, prevItem;
  int transactionCount = 0;

  if (std::cin >> prevItem) {
    transactionCount = 1;
    while (std::cin >> item) {
      if (item.isbn() == prevItem.isbn()) {
        transactionCount++;
        prevItem = item; /* this contributes nothing of value */
      } else {
        std::cout << "ISBN: " << prevItem.isbn()
                  << "\tTransactions: " << transactionCount << std::endl;

        prevItem = item;
        transactionCount = 1;
      }
    }
    std::cout << "ISBN: " << prevItem.isbn()
              << "\tTransactions: " << transactionCount << std::endl;
  } else
    return -1;
}
