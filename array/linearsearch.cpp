#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>array{3,5,8,6,2,7,1};
    cout<<"Enter the number to be search: ";
    int num;
    cin>>num;
    bool found = false;
    int index=-1;
    for(int i = 0;i<array.size();i++){
        if(array[i]==num){
            found = true;
            index=i;
            break;
        }
    }
    if(found){
        cout<<"Number found at index: "<<index<<endl;
    }else{
        cout<<"Number not found"<<endl;
    }
    return 0;
}