#include <iostream>
using namespace std;

int main(){
    int age[]={31,-21,40,0,-55};
    int size=sizeof(age)/sizeof(int);
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int small_num_index, large_num_index;

    for(int i=0; i<size; i++){
        if(age[i]<smallest){
            smallest = age[i];
            small_num_index = i;

        }else if(age[i]>largest){
            // largest = age[i];
            largest = max(age[i], largest);
            large_num_index = i;

        }
    }

    cout<< "Smallest age is: " << smallest <<endl;
    cout<< "Largest age is: " << largest <<endl;

    cout <<"Index of smallest number is " << small_num_index <<endl; 
    cout <<"Index of largest number is " << large_num_index <<endl; 

    
    return 0;
}