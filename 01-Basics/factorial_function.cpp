#include <iostream>
using namespace std;

int factorial(int a){
    int facto = 1;
    for(int i=1; i<=a; i++){
        facto*=i;
    }
    return facto;
}

int main(){
    cout << factorial(3) <<endl;

    return 0;
}