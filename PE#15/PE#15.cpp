#include <iostream>
using namespace std;

// Reference : https://www.mathblog.dk/project-euler-15/
// Reference : https://math.stackexchange.com/a/286439

uint64_t LatticePaths() {
  int size = 20;
  uint64_t out = 1;
  for (size_t i = 1; i <= size; ++i) {
    out *= size + i;
    out /= i;
  }
  return out;
}

int main() {
  cout << LatticePaths();
  return 0;
}
