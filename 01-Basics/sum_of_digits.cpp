#include <iostream>
using namespace std;


int sumOfDigits(int num){
    int sum=0;
    while(num>0){
        int remainder = num%10;
        int num = num/10;

        sum+=remainder;
    }
    return sum;
}

int main(){
    cout<< sumOfDigits(1234);
    return 0;
}