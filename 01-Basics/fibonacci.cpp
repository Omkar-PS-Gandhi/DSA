// fibnoacci; 0,1,1,2,3,5,8,13,...

#include <iostream>
using namespace std;

int fibonacci(int num){

        // n=4;
        // 0,1,1,2,3

    int pos1=0, pos2=1;
    for(int i=1; i<num; i++){
        pos2+=pos1;
        pos1=pos2-pos1;
    }
    return pos2;
}

int main(){
    cout<< fibonacci(4) <<endl;
    return 0;
}