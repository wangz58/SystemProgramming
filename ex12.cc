// Zhixing Wang
// 1333101
// wangz58@uw.edu
// Copyright [2017] <wangz58@uw>

#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

// read next T from in
// exit_failure if encounter conversion or EOF
template<class T> T ReadValue(istream &in);

int main(int argc, char const *argv[]) {
  vector<double> v;
  cout << "Input 10 doubles:" << endl;

  // read
  for (int i = 0; i < 10; i++)
    v.push_back(ReadValue<double>(cin));

  // sort
  sort(v.begin(), v.end());

  // print
  cout << "Your sorted doubles are:" << endl;
  for (int i = 0; i < 10; i++)
    cout << v[i] << endl;

  return EXIT_SUCCESS;
}

template<class T> T ReadValue(istream &in) {
  T tmp;
  if (!(in >> tmp)) {
    cerr << "Input Error, conversion or EOF" << endl;
    exit(EXIT_FAILURE);
  }
  return tmp;
}
