#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>array1{1,-2,3,4,5,-6,-7,8};
    vector<int> pos, neg;
    int n = array1.size();
    for(int i = 0; i < n;i++){
        if(array1[i] > 0){
            pos.push_back(array1[i]);
        }
        else{
            neg.push_back(array1[i]);
        }
    }
    if(pos.size() > neg.size()){
        for(int i = 0; i< neg.size(); i++){
            array1[2*i] = pos[i];
            array1[2*i+1] = neg[i];
        }
        int index = neg.size() * 2;
        for(int i= neg.size();i<pos.size();i++){
            array1[index] = pos[i];
            index++;
        }
    }
    else{
        for(int i = 0; i<pos.size();i++){
            array1[2*i] = pos[i];
            array1[2*i+1] = neg[i];
        }
        int index = pos.size() * 2;
        for(int i= pos.size();i<neg.size();i++){
                array1[index] = neg[i];
                index++;
        }    
    }
    for(auto x : array1){
        cout<< x << " ";
    }
    
    return 0;
}