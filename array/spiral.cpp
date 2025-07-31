#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {9, 4, 2, 8},
        {6, 8, 3, 6},
        {5, 2, 0, 1}
    };

    int n = matrix.size();
    int m = matrix[0].size();
    int left = 0, right = m-1;
    int top = 0, bottom = n-1;

    vector<int> ans;
    while(top <= bottom && left <= right){
    for(int i= left;i<= right; i++){
        ans.push_back(matrix[top][i]);
    }
    top++;
    for(int i= top;i<= bottom; i++){
        ans.push_back(matrix[i][right]);
    }
    right--;

    if(top <= bottom){
        for(int i= right;i>= left; i--){
            ans.push_back(matrix[bottom][i]);

        }
    bottom--;
    }

    if(left<=right){
        for(int i= bottom;i>= top; i--){
            ans.push_back(matrix[i][left]);
        }
        left++;
    }
    }
    for(auto x: ans){
        cout<< x <<" ";
    }
    return 0; 
}