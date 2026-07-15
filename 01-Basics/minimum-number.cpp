#include <iostream>
using namespace std;

int min(int a, int b){
    int minimum = 0;
    if(a<b){
        cout << "a is smaller than b.";
        minimum = a;
    }else{
        cout << "b is smaller than a.";
        minimum = b;
    }

    return minimum;
}

int main(){
    min(4,5);

    return 0;
}