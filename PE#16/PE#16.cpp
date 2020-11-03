#include<iostream>
using namespace std;

/*
 * 215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
 * What is the sum of the digits of the number 2^1000?
 */

// Reference : https://youtu.be/UeYRNNTf9ic

uint8_t cells[251]={0};

void PowerLarge(){
    uint8_t remainder=0, bring_down;
    uint32_t accumulator, i, sum=0;
    bool zero=false;
    cells[250]=1;
    while(!zero){
        remainder = 0;
        zero = true;
        for(int i=250; i>=0; --i){
            bring_down = cells[i];
            zero = bring_down?false:zero;
            accumulator = remainder*16 + bring_down;
            cells[i] = accumulator/10;
            remainder = accumulator%10;
        }
        sum = sum+remainder;
   }
    cout<<sum<<endl;
}

int main(){
    PowerLarge();
    return 0;
}
