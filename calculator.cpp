#include "calculator.h"
#include <iostream>

template <typename T> T Calculator<T>::add(const T &lhs, const T &rhs) {
  goto final;

  int k;
  std::cout << "hello" << std::endl;

final:
  return lhs + rhs;
}
