#include <iostream>
using namespace std;

/* A Pythagorean triplet is a set of three natural numbers, a < b < c, for
 * which, a^2 + b^2 = c^2 For example, 32 + 42 = 9 + 16 = 25 = 52. There exists
 * exactly one Pythagorean triplet for which a + b + c = 1000. Find the product
 * abc.
 */

// Reference : https://en.wikipedia.org/wiki/Pythagorean_triple
// Reference : https://www.mathsisfun.com/numbers/pythagorean-triples.html

bool is1000(int m, int n) {
  int a = m * m - n * n;
  int b = 2 * m * n;
  int c = m * m + n * n;
  return (a + b + c) == 1000;
}

void printABC(int m, int n) {
  int a = m * m - n * n;
  int b = 2 * m * n;
  int c = m * m + n * n;
  cout << a * b * c << endl;
}

void prodABC() {
  for (int m = 22; m > 0; --m) {
    int n = (500 - m * m) / m;
    if (is1000(m, n)) {
      printABC(m, n);
      break;
    }
  }
}

int main() { prodABC(); }
