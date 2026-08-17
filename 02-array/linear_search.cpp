#include <iostream>
using namespace std;

int linearSearch(int query){
    int sum[]={21,20,35,2,34,12};
    int size = sizeof(sum)/sizeof(int);
    int sumToFind = query;

    for(int i=0; i<size; i++){
        if(sum[i] == sumToFind){
            return i;
        }

    }
    return -1;
};

int main(){
    cout << linearSearch(21)<<endl;
    return 0;
}