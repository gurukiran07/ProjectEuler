#include<iostream>
#include<string>

using namespace std;

string MultiplyBy2(string curr){
    string out{""};
    uint8_t carry{0};
    
    for(int i=curr.length()-1; i>=0; --i){
        uint16_t val = (static_cast<uint8_t>(curr[i] - '0')*2) + carry;
        out = static_cast<char>(val%10 + '0') + out;
        carry = val/10;
       }
       return carry? '1'+out:out;
}
void PowerLarge(){
    string out{'2'};
    for(size_t i=1; i<1000; ++i){
        out = MultiplyBy2(out);
    }
    uint64_t sumDigits{0};
    for(char i: out){
        sumDigits += static_cast<uint8_t>(i - '0');
    }
    cout<<sumDigits<<endl;
}

int main(){
    PowerLarge();
    return 0;
}
