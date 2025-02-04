#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>array1{1,1,0,1,1,1,0,1,1};
    int maxi=0;
    int cnt=0;
    for(int i=0;i<array1.size();i++){
        if(array1[i]==1){
            cnt++;
            maxi=max(maxi,cnt);
        }
        else{
            cnt=0;
        }
    }
    cout<<"Max consecutive ones is : "<<maxi;
    return 0;
}