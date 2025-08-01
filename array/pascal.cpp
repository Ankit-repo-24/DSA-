#include<iostream>
#include<vector>

using namespace std;

vector<int> generaterow(int row){
    long long ans =1;
    vector<int> ansrow;
    ansrow.push_back(1);
    for(int col =1;col<row; col++){
        ans = ans * (row - col);
        ans = ans / (col);
        ansrow.push_back(ans);
    }
    return ansrow;
}
int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    vector<vector<int>>ans;
    for(int i=1;i<=n;i++){
        ans.push_back(generaterow(i));
    }
    for(const auto& row : ans){
        for(int num : row){
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}