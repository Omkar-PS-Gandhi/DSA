#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Check if Number is Prime\n";
    cout << "Enter a number: ";
    cin >> n;
    bool isPrime =  true;

    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout<< "Number is Prime" << endl;
    }else{
        cout << "Number is Not Prime" << endl;
    }

    return 0;
}