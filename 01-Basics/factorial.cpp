#include <iostream>
using namespace std;

int main(){
    int factorial=1;
    int n;

    cout <<"Enter a number: ";
    cin >> n;

    for(int i=2; i<=n; i++){
        factorial *= i;
    }

    cout << "factorial of " << n << " is: " << factorial << endl;
    return 0;
}