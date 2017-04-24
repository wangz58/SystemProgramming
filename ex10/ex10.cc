#include "Vector.h"
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  Vector v1;
  cout << "Testing (0, 0, 0)" << endl;
  cout << v1 << endl;
  Vector v2(1, 2, 3);
  Vector v3(2, 3, 4);
  Vector v4(1, 1, 1);
  cout << "Testing (1, 2, 3), (2, 3, 4), (1, 1, 1)" << endl;
  cout << v2 << endl;
  cout << v3 << endl;
  cout << v4 << endl;
  cout << "Testing copy" << endl;
  Vector v5(v2);
  cout << v5 << endl;
  cout << "Testing (0, 0, 0) + (2, 3, 4)" << endl;
  cout << v1 + v3 << endl;
  cout << "Testing (2, 3, 4) - (1, 2, 3)" << endl;
  cout << v3 - v2 << endl;
  cout << "Testing (1, 2, 3) * (2, 3, 4)" << endl;
  cout << v2 * v3 << endl;
  cout << "Testing (2, 3, 4) * 10.0" << endl;
  cout << v3 * 10.0 << endl;
  return 0;
}