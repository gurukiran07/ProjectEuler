#include <iostream>
using namespace std;

/* The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 * Find the sum of all the primes below two million.
 */

bool isPrime(uint64_t num) {
  if (num == 2 || num == 3) return true;
  if (num == 1 || num % 2 == 0 || num % 3 == 0) return false;

  for (uint64_t i = 5; i * i <= num; i = i + 2)
    if (num % i == 0) return false;
  return true;
}

void PrimeSum() {
  uint64_t sum = 5;
  for (uint64_t i = 5; i <= 2e6; i = i + 2) {
    if (isPrime(i)) {
      sum = sum + i;
    }
  }
  cout << sum << "\n\n";
}

int main() {
  PrimeSum();
  return 0;
}
