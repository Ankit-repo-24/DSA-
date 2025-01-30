#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>array{3,5,8,6,2,7,1};
    int d;
    cout<<"number of rotation"<<endl;
    cin>> d;

    d=d%array.size();
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=array[i];
    }
    for(int i=d;i<array.size();i++){
        array[i-d]=array[i];
    }
    for(int i= array.size() - d;i<array.size();i++){
        array[i]=temp[i-(array.size()-d)];
    }

    for(auto x : array){
        cout<< x << " ";
    }
    return 0;
}