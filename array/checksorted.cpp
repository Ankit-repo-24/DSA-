#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>array{3,5,8,9,9,10,12};
    for(int i=1;i<array.size();i++){
        if(array[i]<array[i-1]){
            cout<<"unsorted"<<endl;
            return 0;
        }
    }
    cout<<"sorted"<<endl;
    return 0;
}