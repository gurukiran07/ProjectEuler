#include<iostream>
using namespace std;

/*
 * The sum of the squares of the first ten natural numbers is (1^2 + 2^2 + 3^2 + ... + 10^2) = 385
 * The square of the sum of the first ten natural numbers is (1 + 2 + 3 + ... + 10) = 3025
 * Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640
 * Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 */

uint64_t SquareOfSumN(uint64_t n){
    uint64_t val = (n*(n+1)/2);
    return val*val;
}

uint64_t SumOfSqauresOfN(uint64_t n){
    return n*(n+1)*(2*n + 1)/6;
}

int main(){
    cout<<SquareOfSumN(100)-SumOfSqauresOfN(100);
}
