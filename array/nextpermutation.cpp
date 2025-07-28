#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> array1{2, 1, 5, 4, 3, 0, 0};
    int ind = -1;
    int n = array1.size();

    // Step 1: Find the break point
    for (int i = n - 2; i >= 0; i--) {
        if (array1[i] < array1[i + 1]) {
            ind = i;
            break;
        }
    }

    if (ind == -1) {
        reverse(array1.begin(), array1.end());
    } else {
        // Step 2: Find element just greater than array1[ind]
        for (int i = n - 1; i > ind; i--) {
            if (array1[i] > array1[ind]) {
                swap(array1[i], array1[ind]);
                break;
            }
        }
        // Step 3: Reverse the remaining part
        reverse(array1.begin() + ind + 1, array1.end());
    }

    // Output result
    for (int num : array1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
