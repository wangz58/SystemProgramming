// Copyright [2017] wangz58
// Zhixing Wang
// 1333101
// wangz58@uw.edu
#include <iostream>
#include <cstdlib>
#include "IntPair.h"

void Test(IntPair ip);

int main(int argc, char const *argv[]) {
  // initialize a dummy instance of IntPair
  IntPair p = IntPair(1, 2);
  // test call by reference or value
  Test(p);
  // check the current value stored in two ints
  int tmp_x, tmp_y;
  p.get(&tmp_x, &tmp_y);
  // output results
  if (tmp_x != 1 && tmp_y != 2) {
    std::cout << "Is pass by value" << std::endl;
  } else {
    std::cout << "Is pass by reference" << std::endl;
  }
  return EXIT_SUCCESS;
}

void Test(IntPair ip) {
  int x, y;
  // get the value of two ints
  ip.get(&x, &y);
  // set the value of two ints by incrementing one
  ip.set(x + 1, y + 1);
}
