#include<iostream>
#include<vector>
#include<algorithm>  // for merge()

using namespace std;

int main() {
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8, 10};
    vector<int> merged(arr1.size() + arr2.size());

    merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), merged.begin());

    cout << "Merged Array: ";
    for(int num : merged)
        cout << num << " ";

    return 0;
}
