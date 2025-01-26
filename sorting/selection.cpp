#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>array{2,5,1,6,3,7,2,9};
    for(int i=0;i<array.size()-1;i++){
        int mini=i;
        for(int j=i;j<array.size();j++){
            if(array[j]<array[mini]){
            mini=j;
            }
        }
        int temp=array[mini];
        array[mini]=array[i];
        array[i]=temp;
    }

    for(auto x : array){
        cout<< x << " " ;
    }
    return 0;
}