#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>array1{1,2,4,5,6,7};
    int xor1=0, xor2=0;
    for(int i=0;i<array1.size()-1;i++){
        xor2=xor2 ^ array1[i];
        xor1=xor1 ^ (i+1);
    }
    xor1=xor1 ^ array1.size();
    int num=xor1 ^ xor2;
    cout<<"Missing number is: "<<num;
    return 0;
}