#include<iostream>
using namespace std;

/*
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 * What is the 10 001st prime number?
 */

bool isPrime(uint64_t num){
	if (num==2 || num==3)
		return true;
	if (num==1 || num%2==0 || num%3==0)
		return false;

	for(size_t i=5; i*i<=num;i=i+2){
		if(num%i==0)return false;}
	return true;
}
	
uint64_t Prime10_001(){
	uint64_t prime=3;
	size_t count=2;
	size_t i=5;
	while(count!=10001){
		if(isPrime(i)){
			++count;
			prime = i;
		}
		++i;
	}
	return prime;
}
int main(){
	cout<<Prime10_001();
	return 0;
}
