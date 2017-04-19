// Copyright [2017] <wangz58@uw>
// Zhixing Wang
// 1333101
// wangz58@cs.washington.edu
#include <iostream>
int main(int argc, char const *argv[]) {
  int n = -1;
  std::cout << "Type in a positive integer to factor: ";
  std::cin >> n;
  if (n < 0) {
    std::cout << "Please type in a positive integer" << std::endl;
    return 1;
  }
  for (int i = 1; i < n; i++) {
    if (n % i == 0) {
      std::cout << i << " ";
    }
  }
  std::cout << n << std::endl;
  return 0;
}
