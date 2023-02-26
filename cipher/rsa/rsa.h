//
// Created by mrybs on 25.02.23.
//

#ifndef CATERA_RSA_H
#define CATERA_RSA_H

#include "../../Maths/LongInt/LongInt.hpp"
#include "../../Maths/functions.h"
#include <iostream>
#include <tuple>

namespace rsa{
class rsa {
public:
  static std::tuple<LongInt, LongInt, LongInt> keygen(LongInt p, LongInt q){
    if(maths::maths::isPrime(p) and maths::maths::isPrime(q)){
      throw "p and q should be primes!";
    }
    LongInt n = p * q;
    LongInt fi = (p - 1) * (q - 1);
    std::cout<<fi;
    return std::make_tuple(n, fi, LongInt(0));
  }
  static LongInt findE(LongInt fi){
    for(LongInt i = 0; i < fi; i++){
      if(maths::maths::isPrime(i) and LongInt::gcd(i, fi) == 1){
        return i;
      }
    }
    return 1;
  }
};
}

#endif // CATERA_RSA_H
