#include <iostream>
using namespace std;

int factorial(int num){
    int mul = 1;
    for(int i=num; i>=1; i--){
        mul *= i;
    }
    return mul;
}

int nCr(int n, int r){
    //formula for nCr: n!/r! * (n-r)!
    int binomial = factorial(n)/(factorial(r)*factorial(n-r));
    return binomial;
}

int main(){
    
    cout<<"Binomial of 2C5 is: " << nCr(8,2) <<endl;
    return 0;
}