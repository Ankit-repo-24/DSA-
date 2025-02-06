 #include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>array1{0,1,1,0,1,2,1,2,0,0,0};
    int n=array1.size();
    int low=0,mid=0,high=n-1;
    while(mid <= high){
        if(array1[mid]==0){
            swap(array1[low],array1[mid]);
            low++;
            mid++;
        }
        else if(array1[mid]==1){
            mid++;
        }
        else{
            swap(array1[mid],array1[high]);
            high--;
        }
    }
    for(auto x: array1){
        cout<< x <<" ";
    }
    return 0;
}