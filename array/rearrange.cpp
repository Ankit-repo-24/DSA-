#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>array1{1,-2,-4,5,6,-7};
    int n = array1.size();
    vector<int> ans(n,0);
    int posindex = 0, negindex = 1;
    for(int i=0;i<n;i++){
        if(array1[i]  < 0){
            ans[negindex] = array1[i];
            negindex += 2;
        }
        else{
            ans[posindex] = array1[i];
            posindex += 2;
        }
    }
    for(auto x : ans){
        cout<< x << " ";
    }
    return 0;
}