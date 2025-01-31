#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>array{1,0,2,3,2,0,0,4,5,1};
    int j=-1;

    for(int i=0;i<array.size();i++){
        if(array[i] == 0){
            j=i;
            break;
        }
    }

    if(j == -1) return 0;

    for(int i = j+1;i<array.size();i++){
        if(array[i] != 0){
            swap(array[i],array[j]);
            j++;
        }
    }
    for(auto x : array){
        cout<< x << " ";
    }
    return 0;
}