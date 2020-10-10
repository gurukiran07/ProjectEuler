#include<iostream>
#include<vector>
#include<string>
using namespace std;

/* 
 * Work out the first ten digits of the sum of the following one-hundred 50-digit numbers.
 * Numbers given here : https://projecteuler.net/problem=13
 */

vector<string> terminalReadFile(){
	vector<string> vec;
	string line;
	for(size_t i=0; i<100; ++i){
		cin>>line;
		vec.push_back(line);
	}
	return vec;
}

string add(string num1, string num2){
	
	int padlen;
	if(num1.size()>num2.size()){
		padlen = num1.size()-num2.size();
		for(size_t i=0; i<padlen; i++){
			num2 = '0'+num2;
		}
	}
	else{
		padlen = num2.size()-num1.size();
		for(size_t i=0; i<padlen; ++i){
			num1 = '0' + num1;
		}
	}

	int i = num1.size()-1;
	uint64_t a,b,c=0;
	string sum{};

	for(; i>=0; --i){
		a = static_cast<int>(num1[i])-'0';
		b = static_cast<int>(num2[i])-'0';
		c = a+b+c;
		sum = static_cast<char>('0'+c%10) + sum;
		c = c/10;
	}
	
	if(c>0){
		sum = static_cast<char>('0'+c) + sum;
	}
	return sum;
}
		
	
	
void LargeSum(){
	vector<string> vec(terminalReadFile());
	string sum = vec[0];
	for(size_t i=1; i<vec.size(); ++i){
		sum = add(sum, vec[i]);
	}
	cout<<sum.substr(0,10);
}

int main(){
	LargeSum();
	return 0;	
}
