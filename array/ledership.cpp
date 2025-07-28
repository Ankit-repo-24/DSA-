#include<iostream>
#include<vector>
#include <climits>
#include <algorithm>

using namespace std;
int main(){
    vector<int>array1{10,22,12,3,0,6};
    vector<int>ans;
    int maxi = INT_MIN;
    int n = array1.size();
    for(int i=n-1;i>=0;i--){
        if(array1[i] > maxi){
            ans.push_back(array1[i]);
        }
        //keep track of right max
        maxi = max(maxi,array1[i]);
    }
    sort(ans.begin(), ans.end());
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}