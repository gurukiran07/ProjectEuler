#include<iostream>
using namespace std;


uint64_t NextCollatz(uint64_t val){
	if (val&1){
		return (3*val + 1);
	}
	return val/2;
}

uint64_t LongestCollatz(){
	uint64_t maxChainLength = 0;
	uint64_t maxStartingValue = 0;
	uint64_t curr;
	for(size_t i=2; i<1e6; ++i){
		uint64_t chainLength = 0;
		curr = i;
		while(curr!=1){
			curr = NextCollatz(curr);
			++chainLength;
			}
		if (maxChainLength<chainLength){
			maxChainLength = chainLength;
			maxStartingValue = i;
		}
	}
	return maxStartingValue;
}

int main(){
	cout<<LongestCollatz()<<endl;
	return 0;
}
