#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int n;
    cout <<"Enter a random number: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    cout << "Sum of N numbers is: " << sum << endl;

    return 0;
}