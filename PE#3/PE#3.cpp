#include<iostream>
using namespace std;

/*
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 */

unsigned long long int LargestPrimefactor(long long int n){
    int i = 2;
    while(n>1){
        while(n%i==0){
            n = n/i;
            if (n==1){
                return i;
            }
        }
        i = i+1;
    }
    return i;
}

int main(){
    unsigned long long int n = 600851475143L;
    cout<<LargestPrimefactor(n);
}
