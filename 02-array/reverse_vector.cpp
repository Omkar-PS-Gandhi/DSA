#include <iostream>
#include <vector>
using namespace  std;


int reverseVector(vector<int> &age /*refrenced vector*/, int size){
    int start=0, end=size-1;

    while(start<end){
            swap(age[start],age[end]);
            start++;
            end--;
    }

    for(int val:age){
        cout<<val <<" ";
    }
    cout<<endl;
    return 0;
}

int main(){
    vector<int> age={2,40,12,34,54}; //vector values will be updated it is passed by refrence.
    
    int vectorSize=age.size();
    
    reverseVector(age, vectorSize);

    for(int val:age){
        cout<<val <<" ";
    }
    return 0;
}