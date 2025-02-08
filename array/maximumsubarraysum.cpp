#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 int main(){
    vector<int>array1{-2,-3,4,-1,-2,1,5,-3};
    long long sum =0,maxi=LONG_MIN;
    for(int i=0;i<array1.size();i++){
        sum += array1[i];
        if(sum>maxi){
            maxi=sum;
        }
        if(sum<0){
            sum =0;
        }
    }
    cout<<"Maximum subarray sum is: "<<maxi;
    return 0;
 }