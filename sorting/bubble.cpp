#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>array{2,5,1,6,3,7,2,9};
    for(int i=0;i<array.size();i++){
        for(int j=i+1;j<array.size();j++){
            if(array[j]<array[i]){
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    for(auto x : array){
        cout<< x << " " ;
    }
    return 0;
}