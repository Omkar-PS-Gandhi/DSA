#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if(ch >= 'a' && ch <= 'z'){
        cout << ch << " is Lower Case";
    }else{
        cout << ch << " is Upper Case";
    }

    return 0;
}