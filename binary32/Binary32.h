#ifndef FLOATNUM_H
#define FLOATNUM_H

class Binary32 {
public:
  Binary32(float fNum);
  Binary32() = default;
  void printIEEE();
  Binary32 Add(Binary32 objOne, Binary32 objTwo);
  Binary32 Sub(Binary32 objOne, Binary32 objTwo);
  Binary32 Mul(Binary32 objOne, Binary32 objTwo);
  Binary32 Div(Binary32 objOne, Binary32 objTwo);
  bool IsZero();
  bool Equals(Binary32 obj);

  union {
    float num;
    struct {
    public:
        unsigned int mantissa : 23;
        unsigned int exponent : 8;
        unsigned int sign : 1;
    }binRow;
  }mFloat;

};

//#include "Binary32.cpp"
#endif