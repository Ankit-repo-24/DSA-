#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int>arr{-2,-2,-2,-1,-1,-1,0,0,0,2,2,2,2};
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        int j = i+1;
        int k = arr.size()-1;
        while(j<k){
            int sum = arr[i] + arr[j] + arr[k];
            if(sum<0){
                j++;
            }
            else if(sum>0){
                k--;
            }
            else{
                vector<int> temp = {arr[i], arr[j], arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && arr[j]==arr[j-1]) j++;
                while(j<k && arr[k]==arr[k+1]) k--;
            }
        }
    }
    for(auto x : ans){
        for(auto y : x){
            cout << y << " ";
        }
        cout << endl;
    }

    return 0;
}