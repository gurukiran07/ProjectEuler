#include <iostream>
#include <vector>
using namespace std;

// Reference : https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes

void PrimeSum() {
  vector<bool> prime(2e6, true);
  for (size_t i = 2; i < 2e6; ++i) {
    if (prime[i]) {
      for (size_t j = i * i; j < 2e6; j = j + i) prime[j] = false;
    }
  }

  uint64_t sum = 0;
  for (size_t i = 2; i < 2e6; ++i) {
    if (prime[i]) sum = sum + i;
  }
  cout << sum << endl;
}

int main() { PrimeSum(); }
