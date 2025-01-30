#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>array{3,5,8,6,2,7,1};
    int temp=array[0];
    for(int i=1;i<array.size();i++){
        array[i-1]=array[i];
    }
    array[array.size()-1]=temp;

    for(auto x : array){
        cout<< x << " ";
    }
    return 0;
}