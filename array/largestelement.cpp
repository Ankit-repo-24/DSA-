#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>array{3,5,8,6,2,7,1};
    int larg=array[0];
    for(int i=1;i<array.size();i++){
        if(array[i]>larg){
            larg=array[i];
        }
    }
    cout<<larg;
    return 0;
}