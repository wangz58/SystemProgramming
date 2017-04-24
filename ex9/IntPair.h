// Copyright [2017] wangz58
// Zhixing Wang
// 1333101
// wangz58@uw.edu
#ifndef _INTPAIR_H_
#define _INTPAIR_H_

class IntPair {
 public:
  IntPair(const int x, const int y);
  void get(int *const x_out, int *const y_out) const;
  void set(const int x, const int y);

 private:
  int x_;
  int y_;
};

#endif  // _INTPAIR_H_
