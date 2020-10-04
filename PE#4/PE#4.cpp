#include<iostream>
using namespace std;

/* A palindromic number reads the same both ways.
 * The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 * Find the largest palindrome made from the product of two 3-digit numbers.
 */
 
 // Reference : https://adamdrake.com/an-unreasonably-deep-dive-into-project-euler-problem-4.html

bool isPalindrome(int64_t number){
    int64_t num = 0, copy=number;
    while(copy>1){
        num = num*10 + copy%10;
        copy = copy/10;
    }
    return number==num;
}

int64_t Largest3Palindrome(){
    int64_t res=0;
    for(size_t i=990; i>=100; i=i-11){
        for(size_t j=999; j>=100; j--){
            int64_t prod = i*j;
            if (prod>res && isPalindrome(prod)){
                res = prod;
                break;
            }
            else if(res > prod){
                break;
            }
        }
    }
    return res;
}

int main(){
    cout<<Largest3Palindrome();
}
