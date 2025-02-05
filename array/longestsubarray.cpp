#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arrray1{1,2,3,1,1,1,1,4,2,3};
    int k;
    cout<<"Enter the value of k: "<<endl;
    cin>>k;
    int left=0,right=0;
    long long sum=arrray1[0];
    int maxlen=0;
    int n=arrray1.size();
    while(right<n){
        while(left<=right && sum>k){
            sum -=arrray1[left];
            left++;
        }
        if(sum==k){
            maxlen = max(maxlen,right-left+1);
        }
        right++;
        if(right<n) sum +=arrray1[right];
    }
    cout<<"longest subarray is: "<<maxlen;
    return 0;
}