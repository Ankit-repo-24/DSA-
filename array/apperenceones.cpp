#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>array1{1,1,2,3,3,4,4};
    int xorr=0;
    for(int i=0;i<array1.size();i++){
        xorr = xorr ^ array1[i];
    }
    cout<<"The number is: "<<xorr;
    return 0;
}