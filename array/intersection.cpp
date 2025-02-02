#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int>array1{1,1,2,3,4,5};
    vector<int>array2{2,3,4,4,5,6};

    int i=0;
    int j=0;
    vector<int>ans;

    while(i<array1.size() && j<array2.size()){
        if(array1[i]<array2[j]){
            i++;
        }
        else if(array1[i]>array2[j]){
            j++;
        }
        else{
            ans.push_back(array1[i]);
            i++;
            j++;
        }
    }
    for(auto x: ans){
        cout<< x <<" ";
    }
    return 0;
}