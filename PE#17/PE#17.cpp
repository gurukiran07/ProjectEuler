#include <iostream>
#include <string>
using namespace std;

// Lengths of words e.g one->3 and so on...
uint8_t OnesPlace[]{3, 3, 5, 4, 4, 3, 5, 5, 4}; 
uint8_t ElevenToNineteen[]{6, 6, 8, 8, 7, 7, 9, 8, 8};
uint8_t Tens[]{3, 6, 6, 6, 5, 5, 7, 6, 5};
uint8_t Hundred{7};
uint8_t Thousand{8};
uint8_t And{3};

uint64_t GetLength(uint32_t num) {
  uint32_t sum{0};
  if (num < 10) {
    sum += OnesPlace[num - 1];
  } else if (num > 10 && num < 20) {
    sum += ElevenToNineteen[num % 10 - 1];
  } else if (num > 20 && num < 100 && num % 10) {
    uint8_t tens{Tens[num / 10 - 1]}, ones{OnesPlace[num % 10 - 1]};
    sum += (tens + ones);
  } else if (num % 10 == 0 && num < 100) {
    sum += Tens[num / 10 - 1];
  } else if (num % 100 == 0 && num > 99) {
    uint8_t one = num / 100;
    sum += Hundred + OnesPlace[one - 1];
  } else {
    uint8_t hun{OnesPlace[num / 100 - 1]};
    sum += (hun + Hundred + And + GetLength(num % 100));
  }

  return sum;
}
int main() {
  uint64_t sum{0};
  for (size_t i = 1; i < 1000; ++i) {
    sum += GetLength(i);
  }
  cout << sum + OnesPlace[0] + Thousand << endl;
  return 0;
}
