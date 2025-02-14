#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>array1{7,1,5,3,6,4};
    int mini=array1[0];
    int profit=0;
    for(int i=0;i<array1.size();i++){
        int cost=array1[i]-mini;
        profit=max(profit,cost);
        mini=min(mini,array1[i]);
    }
    cout<<"Maximum profit is: "<<profit;
    return 0;
}