#include <iostream>
#include <vector>
using namespace  std;


int linearSearch(vector<int> rollNo, int idToFind){
    for(int id : rollNo){
        if(id == idToFind){
            cout<<"ID Found"<<endl;
            return 0;
            break;
        }
    }
    cout<<"ID not found"<<endl;
    return -1;
}

int main(){
    vector<int> rollNo={2,20,3,13,45,86};

    cout<<linearSearch(rollNo, 10)<<endl;
    
    return 0;
}