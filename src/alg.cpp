// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  if (n == 0) {
    return 1;
  }
  if (n == 1) {
    return value;
 } else {
    for(int i = 1;i <= n;i++) {
      value = value*i;
    }
    return value;
  }
}
 
uint64_t fact(uint16_t n) {
  if (n == 1 || n == 0) {
    return 1;
  } else {
    return (n*fact(n-1));
  }
}


double calcItem(double x, uint16_t n) {
  return pown(x,n)/fact (n);
}

double expn(double x, uint16_t count) {
  if (count < 1) {
    return 1;
  } else {
    int a = 0;
    for (int i = 0; i < count; i++) {
      a = a + calcItem(x,i);
    }
    return a;
  }
}

double sinn(double x, uint16_t count) {
  double b = 0;
  for (int i = 1; i <= count; i++) {
    b = b + (pown(-1,i) * pown(x,2i -1 ) / (fact(2 * i - 1)));
         }
  return b;
}

double cosn(double x, uint16_t count) {
  double c = 0;
  for (int i = 1; i <= count; i++) {
    c = c + (pown(-1;i) * pown(x, 2i - 2) / (fact(2 * i - 2)));
    }
  return c;
}
