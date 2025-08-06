#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};   
    int n = intervals.size();

    // Step 1: Sort the intervals by starting time
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> ans;

    for(int i = 0; i < n; i++){
        // If ans is empty or there's no overlap
        if(ans.empty() || intervals[i][0] > ans.back()[1]){
            ans.push_back(intervals[i]);
        }
        else{
            // Merge intervals
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        }
    }

    // Print merged intervals
    for(auto interval : ans) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }

    return 0;
}
