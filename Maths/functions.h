//
// Created by mrybs on 25.02.23.
//

#ifndef CATERA_FUNCTIONS_H
#define CATERA_FUNCTIONS_H

#include "LongInt/LongInt.hpp"

namespace maths{
class maths{
public:
  static bool isPrime(LongInt n){
    if(n == 0 or n == 1)
      return false;

    for(LongInt i = 2; i <= n / 2; i++)
      if(n % i == 0)
        return false;

    return true;
  }
};
}

#endif // CATERA_FUNCTIONS_H
