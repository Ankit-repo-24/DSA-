#include<iostream>
#include<vector>
#include <map>

using namespace std;

int main(){
    vector<int>arr{4,2,2,6,4};
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    int xr=0;
    map<int, int> mpp;
    mpp[xr]++;
    int cnt =0;
    for(int i=0;i<arr.size();i++){
        xr = xr ^ arr[i];
        int x = xr ^ k;
        cnt += mpp[x];
        mpp[xr]++;
    }
    cout<< cnt;
    return 0;
}