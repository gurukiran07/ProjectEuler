#include <iostream>
using namespace std;

/*
 * 2520 is the smallest number that can be divided by each of the numbers from 1
 * to 10 without any remainder. What is the smallest positive number that is
 * evenly divisible by all of the numbers from 1 to 20?
 */

uint64_t gcd(uint64_t a, uint64_t b) {
  if (b == 0)
    return a;
  else {
    return gcd(b, a % b);
  }
}

uint64_t lcm(uint64_t a, uint64_t b) { return a * b / gcd(a, b); }

uint64_t SmallestMultiple(size_t n) {
  uint64_t val = 6;
  for (size_t i = 4; i <= n; ++i) {
    val = lcm(val, i);
  }
  return val;
}

int main() { cout << SmallestMultiple(20); }
