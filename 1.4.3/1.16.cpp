#include <iostream>

int main(){
  int sum=0, x;

  while(std::cin >> x)
    sum+=x;

  std::cout << sum;

  return 0;
}
