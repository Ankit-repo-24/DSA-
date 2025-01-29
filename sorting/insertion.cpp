#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>array{2,5,1,6,3,7,2,9};
    for(int i=0;i<array.size();i++){
        int j=i;
        while(j>0 && array[j-1]>array[j]){
            int temp = array[j-1];
            array[j-1] = array[j];
            array[j] = temp;
            j--;
        }
    }
    for(auto x:array){
        cout<< x << " ";
    }
    return 0;
}