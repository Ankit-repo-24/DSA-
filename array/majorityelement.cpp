#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>array1{2,2,3,3,1,2,2};
    int cnt=0;
    int el;
    for(int i=0;i<array1.size();i++){
        if(cnt==0){
            cnt=1;
            el=array1[i];
        }
        else if(array1[i] == el){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1 =0;
    for(int i=0;i<array1.size();i++){
        if(array1[i] == el) cnt1++;
    }
    if(cnt1 > (array1.size() /2)){
        cout<<"Majority element is : "<<el;
    }
    return 0;
}