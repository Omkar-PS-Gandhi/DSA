#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int sum2 = 0;
    int count = 1;
    int n;
    cout <<"Enter a number: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        if(i%2 != 0){
            sum += i;

        }
    }

    while(count <= n){
        if(count%2 != 0){
            sum2 += count;
        }
        count ++;
    }

    cout << "Sum using While loop: " << sum2 << endl;

    cout << "Sum of Odd Numbers is: " << sum << endl;
    return 0;
}