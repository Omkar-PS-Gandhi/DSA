//This ia two pointer approach.
#include <iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start=0, end=size-1;
    while(start < end){
        int swap=arr[start];
        arr[start] = arr[end];
        arr[end] = swap;
        // swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[]={12,2,13,20,21};
    int size=sizeof(arr)/sizeof(int);
    
    reverseArray(arr, size);
    for(int i=0; i<size; i++){
        cout<< arr[i] <<" ";
    }
    cout <<endl;
    return 0;
}