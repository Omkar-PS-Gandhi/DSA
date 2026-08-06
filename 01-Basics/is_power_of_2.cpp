#include <iostream>
using namespace std;

int main(){
    int x = 1;
    bool isPower = true;

if(x >=1){
    while(x>1){
        if( x%2 == 0){
            x /= 2;
        }else{
            isPower = false;
            break;
        }
    }
}else{
    isPower = false;
}

    if(isPower){
        cout << "True" <<endl;
    }else{
        cout << "False" <<endl;
    }

    return 0;
}
