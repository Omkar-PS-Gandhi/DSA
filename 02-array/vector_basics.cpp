#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> age={3,2,4,2,3};
    age.push_back(20); //push 20 at the end of the vector
    age.push_back(12); //push 12 at the end of the vector

    age.pop_back(); //remove the element from the last index

    cout<<"Size of vector: " << age.size()<<endl;
    cout<<"Capacity of vector: " << age.capacity()<<endl;

    cout << "Elements of vector are: " <<endl;

    for(int ele : age){
        cout << ele <<endl;
    }

    return 0;
}