#include <iostream>
#include <string>
using namespace std;

string add(string one, string two) {
  string out{""};
  one = '0' + one;
  uint16_t temp, carry = 0;
  for (int32_t i = one.length() - 1; i >= 0; --i) {
    temp = static_cast<uint8_t>(one[i] - '0') +
           static_cast<uint8_t>(two[i] - '0') + carry;
    carry = temp >= 10 ? temp / 10 : 0;
    out = to_string(temp % 10) + out;
  }

  return carry ? '1' + out : out;
}

string multiply(string fact, uint16_t val) {
  string ones{""}, tens{""};
  uint16_t tensPlace, onesPlace, temp;
  tensPlace = val / 10;
  onesPlace = val % 10;
  uint16_t carry = 0;
  for (int16_t i = fact.length() - 1; i >= 0; --i) {
    temp = static_cast<uint8_t>(fact[i] - '0') * onesPlace + carry;
    carry = temp >= 10 ? temp / 10 : 0;
    ones = to_string(temp % 10) + ones;
  }
  ones = to_string(carry) + ones;
  carry = 0;
  for (int16_t i = fact.length() - 1; i >= 0; --i) {
    temp = static_cast<uint8_t>(fact[i] - '0') * tensPlace + carry;
    carry = temp >= 10 ? temp / 10 : 0;
    tens = to_string(temp % 10) + tens;
  }
  tens = to_string(carry) + tens;
  return add(ones, tens + '0');
}
uint32_t SumFactorial() {
  uint64_t fact20 = 1;
  for (size_t i = 2; i <= 20; ++i) {
    fact20 *= i;
  }
  string fact{to_string(fact20)};

  for (size_t i = 21; i <= 99; ++i) {
    fact = multiply(fact, i);
  }

  uint32_t out{0};
  for (auto i : fact) {
    out += static_cast<uint8_t>(i - '0');
  }

  return out;
}
int main() {
  cout << endl;
  cout << SumFactorial() << endl;
  return 0;
}
