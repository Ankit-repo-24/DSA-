#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>array{3,5,8,6,2,7,1};
    int larg=array[0];
    for(int i=1;i<array.size();i++){
        if(array[i]>larg){
            larg=array[i];
        }
    }
    cout<<"largest = "<<larg<<endl;
    int secondlarg=-1;
    for(int i=1;i<array.size();i++){
        if(array[i]>secondlarg && array[i]!=larg){
            secondlarg=array[i];
        }
    }
    cout<<"second largest= "<<secondlarg;
    return 0;
}