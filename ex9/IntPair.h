#ifndef _INTPAIR_H_
#define _INTPAIR_H_

class IntPair {
  public:
    IntPair(const int x, const int y);  // constructor
    void get(int *const x_out, int *const y_out) const; // member function
    void set(const int x, const int y);  // member function

  private:
    int x_;  // data member
    int y_;  // data member
};  // class Point

#endif  // _INTPAIR_H_
